#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int N, P;
    cin >> N >> P;
    vector<int> a(N);
    rep(i,N) cin >> a[i];

    vector<bool> res(N, false);
    rep(i,N) {
        if(a[i] < P) res[i] = true;
    }

    int ans = 0;
    rep(i,N) if(res[i]) ans++;

    cout << ans << endl;
    return 0;
}
