#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

vector<ll> weight(110), value(110);
vector<vector<ll>> dp(110, vector<ll>(100010));

int main() {
    int N, W; cin >> N >> W;

    rep(i,N) cin >> weight[i] >> value[i];

    for (int i = 0; i < N; ++i) {
        for (int sum_w = 0; sum_w <= W; sum_w++) {
            // i番目の品物を選ぶ場合
            if (sum_w - weight[i] >= 0) {
                chmax(dp[i+1][sum_w], dp[i][sum_w - weight[i]] + value[i]);
            }
            // 選ばない場合
            chmax(dp[i+1][sum_w],dp[i][sum_w]);
        }
    }
    cout << dp[N][W] << endl;
    return 0;
}
