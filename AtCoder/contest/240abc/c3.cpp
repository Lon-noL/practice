#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

// dp

int main() {
    int n, X;
    vector<int> a, b;
    cin >> n >> X;
    a = vector<int>(n);
    b = vector<int>(n);
    rep(i,n) cin >> a[i] >> b[i];

    vector<vector<bool>> dp(n+1, vector<bool>(X+101, false));
    dp[0][0] = true;
    rep(i,n) {
        rep(x,X+1) {
            if(dp[i][x]) {
                dp[i+1][x+a[i]] = true;
                dp[i+1][x+b[i]] = true;
            }
        }
    }

    if(dp[n][X]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
