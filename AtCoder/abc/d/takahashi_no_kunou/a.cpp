#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int W, N, K;
int wide[51], value[51];
long long dp[51][51][10010] = {0};

int main() {
    cin >> W >> N >> K;
    rep(i,N) cin >> wide[i] >> value[i];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j <= K; j++) {
                for (int sum_w = 0; sum_w <= W; sum_w++) {
                    if (j == K) {
                        chmax(dp[i+1][j][sum_w], dp[i][j][sum_w]);
                    }
                    else {
                        if (sum_w - wide[i] >= 0) {
                            chmax(dp[i+1][j+1][sum_w], dp[i][j][sum_w - wide[i]] + value[i]);
                        }
                        chmax(dp[i+1][j][sum_w], dp[i][j][sum_w]);
                    }
                }
            }
        }
    cout << dp[N][K][W] << endl;
    return 0;
}
