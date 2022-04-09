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
    int n, s;
    cin >> n >> s;

    vector<int> a(n+1);
    for(int ai = 1; ai < n+1; ai++) cin >> a[ai];

    vector<vector<int>> dp(n+1, vector<int>(s+1,def));
    for(int i = 0; i < s+1; i++)
        dp[0][i] = 0;

    for(int i = 1; i < n+1; i++) {
        for(int j = 0; j < s+1; j++) {
            //　処理
            if(j >= a[i])
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-a[i]] + a[i]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    rep(i,n+1) {
        if(dp[i][s] == s) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
