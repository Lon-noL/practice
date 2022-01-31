#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

// 配るDP
int N;
const int mod = 998244353;

int main() {
    int N; cin >> N;
    vector<int> A(N+1);
    for(int i = 1; i <= N; i++) cin >> A[i];
    vector<vector<ll>> dp(N+1, vector<ll>(10, 0));
// 初期値
    dp[1][A[1]] = 1;

    for(ll i = 1; i <= N-1; i++) {
        for(ll j = 0; j <= 9; j++) {
            dp[i+1][(j + A[i+1]) % 10] += dp[i][j];
            dp[i+1][(j + A[i+1]) % 10] %= mod;
            dp[i+1][(j * A[i+1]) % 10] += dp[i][j];
            dp[i+1][(j * A[i+1]) % 10] %= mod;
        }
    }

    for(int K = 0; K <= 9; K++) {
        cout << dp[N][K] << endl;
    }
    return 0;
}


