#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i,n) cin >> a.at(i);
    rep(i,m) cin >> b.at(i);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = 1000000007;
    rep(i,n) {
        auto it = lower_bound(b.begin(), b.end(), a.at(i));
        int j = it - b.begin();
        int diff = abs(a[i] - b[j]);
        ans = min(ans, diff);
        if (j != 0){
            diff = abs(a[i] - b[j-1]);
            ans = min(ans, diff);
        }
    }
    cout << ans << endl;
    return 0;
}
