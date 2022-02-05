#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int sum = 0;
    rep(i,n) {
        cin >> a[i];
        int box = 0;
        if(a[i] + sum > 360) {
            box = a[i];
            a[i] = box + sum - 360;
            sum = sum + box -360;
        }
        else {
            box = a[i];
            a[i] += sum;
            sum += box;
        }
    }

    a.push_back(360);
    a.push_back(0);
    sort(a.begin(), a.end());
    // rep(i,n+1) cout << a[i] << endl;;

    int ans = 0;
    for(int i = 0; i < n+1; i++) {
        ans = max(ans, a[i+1] - a[i]);
    }
    cout << ans << endl;

    return 0;
}
