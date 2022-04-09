#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL << 60;
const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;
    vector<ll> oks(100010, true);
    rep(i,M) {
        int a;
        cin >> a;
        oks[a] = false;
    }

    vector<ll> dp(100010, 0);
    dp[0] = 1;

    for (int i = 1; i <= N; i++) {
        if (oks[i]) {
            if (i < 2) dp[i] = dp[i-1] % MOD;
            else dp[i] = (dp[i-1] + dp[i-2]) % MOD;
        }
    }
    cout << dp[N] << endl;
    return 0;
}
