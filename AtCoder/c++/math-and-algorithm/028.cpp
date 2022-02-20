#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const int INF = 1001001001;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i,n) cin >> h[i];

    vector<int> dp(n,INF);
    dp[0] = 0;

    for(int i = 0; i < n-1; i++) {
        dp[i+1] = min((abs(h[i] - h[i+1]) + dp[i]), dp[i+1]);
        if(i < n-2)
            dp[i+2] = min((abs(h[i] - h[i+2]) + dp[i]), dp[i+2]);
    }

    cout << dp[n-1] << endl;
    return 0;
}
