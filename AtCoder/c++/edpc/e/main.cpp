#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL << 60;

const int MAX_N = 110;
const int MAX_V = 100100;

vector<ll> weight(MAX_N), value(MAX_N);
vector<vector<ll>> dp(MAX_N, vector<ll>(MAX_V));

int main(){
    int N;
    ll W;
    cin >> N >> W;
    rep(i,N) cin >> weight[i] >> value[i];

    for (int i = 0; i < MAX_N; i++) for (int j = 0; j < MAX_V; j++) dp[i][j] = INF;

    dp[0][0] = 0;

    for (int i = 0; i < N; i++) {
        for (int sum_v = 0; sum_v < MAX_V; sum_v++) {
            if (sum_v - value[i] >= 0) chmin (dp[i+1][sum_v], dp[i][sum_v - value[i]] + weight[i]);

            chmin (dp[i+1][sum_v], dp[i][sum_v]);
        }
    }

    ll res = 0;
    for (int sum_v = 0; sum_v < MAX_V; ++sum_v) {
        if (dp[N][sum_v] <= W) res = sum_v;
    }
    cout << res << endl;
    return 0;
}
