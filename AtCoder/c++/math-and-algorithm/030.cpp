#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const int def = -1;

int main() {
    int n, w;
    cin >> n >> w;

    int N = n+1, W = w+1;

    vector<vector<ll>> dp(W,vector<ll>(N,def));
    rep(wi,W) dp[wi][0] = 0;
    rep(ni,N) dp[0][ni] = 0;

    vector<int> weight(N), value(N);
    for(int i = 1; i < N; i++) cin >> weight[i] >> value[i];

    for(int i = 1; i < W; i++) {
        for(int j = 1; j < N; j++) {
            // 処理
            if(i >= weight[j])
                dp[i][j] = max(dp[i][j-1], (dp[i - weight[j]][j-1] + value[j]));
            else
                dp[i][j] = dp[i][j-1];
        }
    }

    ll ans = 0;
    rep(i,W) ans = max(ans, dp[i][n]);
    cout << ans << endl;
    return 0;
}
