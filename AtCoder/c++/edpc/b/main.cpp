#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const ll INF = 1LL << 60;
vector<ll> h(100010);
vector<ll> dp(100010);

int main() {
    int n, k; cin >> n >> k;

    rep(i,n) cin >> h[i];
    rep(i, 100010) dp[i] = INF;
    dp[0] = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 1; j <= k; ++j) {
            if (i+j <= n) {
                chmin(dp[i+j], dp[i] + abs(h[i+j] - h[i]));
            }
        }
    }

    cout << dp[n-1] << endl;
    return 0;
}
