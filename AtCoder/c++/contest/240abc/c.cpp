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
    int n, x;
    cin >> n >> x;

    vector<int> a(n+1), b(n+1);
    ll suma = 0, sumb = 0;
    for(int i = 1; i < n+1; i++) {
        cin >> a[i] >> b[i];
        suma += a[i];
        sumb += b[i];
    }

    if(x < suma || x > sumb) {
        cout << "No" << endl;
        return 0;
    }

    vector<vector<int>> dp(x+1,vector<int>(n+1,def));
    rep(i,n+1) dp[0][i] = 0;
    rep(i,x+1) dp[i][0] = 0;

    for(int i = a[1]; i < x+1; i++) {
        for(int j = 1; j < n+1; j++) {
            // 処理
            if(i >= b[j]){
                // dp[i][j] = max(dp[i-1][j], dp[i-b[j]][j-1] + b[j]);
                dp[i][j] = max(dp[i-1][j], dp[i-b[j]][j-1] + b[j]);
            }
            if(i >= a[j]){
                dp[i][j] = max(dp[i-1][j], dp[i-a[j]][j-1] + a[j]);
            }
            else{
                dp[i][j] = dp[i][j-1] + a[j];
            }
        }
    }

        if(dp[x][n] == x){
            cout << "Yes" << endl;
            return 0;
        }
    cout << "No" << endl;
    return 0;
}
