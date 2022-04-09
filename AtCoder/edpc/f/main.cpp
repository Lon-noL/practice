#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

string s, t;
vector<vector<int>> dp(3010,vector<int>(3010, 0));

int main() {
    cin >> s >> t;
    int n = (int)s.size();
    int m = (int)t.size();

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(s[i] == t[j]) {
                chmax(dp[i+1][j+1], dp[i][j] + 1);
            }
            chmax(dp[i+1][j+1], dp[i+1][j]);
            chmax(dp[i+1][j+1], dp[i][j+1]);
        }
    }

// 復元
    string res = "";
    while(n > 0 && m > 0) {
        if(dp[n][m] == dp[n-1][m]) n--;
        else if(dp[n][m] == dp[n][m-1]) m--;
        else {
            res = s[n-1] + res;
            --n; --m;
        }
    }
    cout << res << endl;
    return 0;
}
