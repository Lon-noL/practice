#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> a(n,vector<int>(2));
    rep(j,2) rep(i,n) cin >> a[i][j];

    vector<vector<bool>> dp(n,vector<bool>(2));
    dp[0][0] = dp[0][1] = true;

    for(int i = 1; i < n; i++) {
        rep(j,2) {
            int pi = i - 1;
            rep(pj,2) {
                if(!dp[pi][pj]) continue;
                if(abs(a[pi][pj] - a[i][j]) > k) continue;
                dp[i][j] = true;
            }
        }
    }

    rep(i,2) {
        if(dp[n-1][i]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
