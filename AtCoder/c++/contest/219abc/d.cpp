#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const int INF = 1 << 30;

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    vector<vector<int>> dp(X+1, vector<int>(Y+1, INF));
    dp[0][0] = 0;

    rep(i,N) {
        int a, b;
        cin >> a >> b;

        vector<vector<int>> p(X+1, vector<int>(Y+1, INF));
        swap(dp, p);
        rep(j,X+1) rep(k,Y+1) {
            chmin(dp[j][k], p[j][k]);
            chmin(dp[min(j+a, X)][min(k+b, Y)], p[j][k] + 1);
        }
    }

    int ans = dp[X][Y];
    if(ans == INF) ans = -1;
    cout << ans << endl;
    return 0;
}
