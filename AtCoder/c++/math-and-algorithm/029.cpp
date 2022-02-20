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
    int n;
    cin >> n;

    vector<int> dp(n+1, def);
    dp[0] = 1;

    for(int i = 0; i < n; i++) {
        if(i == 0)
            dp[i+1] = 1;
        else
            dp[i+1] = dp[i] + dp[i+1];
        if(i < n - 1)
                dp[i+2] = dp[i];
    }

    cout << dp[n] << endl;
    return 0;
}
