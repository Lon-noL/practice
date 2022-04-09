#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using mint = modint998244353;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    const int M = 3001;
    vector<mint> dp(M);
    dp[0] = 1;
    rep(i,n) {
        vector<mint> p(M);
        swap(dp,p);
        rep(j,M-1) p[j+1] += p[j];
        rep(j,M) {
            if(a[i] <= j && j <= b[j]) dp[j] += p[j];
        }
    }
    mint ans;
    rep(i,M) ans += dp[i];
    cout << ans.val() << endl;
    return 0;
}
