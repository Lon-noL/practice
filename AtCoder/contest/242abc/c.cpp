#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
using P = pair<int,int>;
const int mod = 998244353;
vector<vector<int>> dp(1000005, vector<int>(10));
// dp
void add(int& x, int y) {
    x += y;
    x %= mod;
}

int main() {
    int n;
    cin >> n;
// 初期化
    for(int d = 1; d <= 9; d++) dp[1][d] = 1;

    for(int i = 2; i <= n; i++) {
        for(int d = 1; d <= 9; d++) {
            if(d-1 >= 1) add(dp[i][d], dp[i-1][d-1]);
            add(dp[i][d], dp[i-1][d]);
            if(d+1 <= 9) add(dp[i][d], dp[i-1][d+1]);
        }
    }
    int ans = 0;
    for(int d = 1; d <= 9; d++) add(ans, dp[n][d]);
    cout << ans << endl;
    return 0;
}
