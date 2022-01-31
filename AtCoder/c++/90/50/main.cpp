#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

const int mod = 1000000007;
int dp[100010];

int main(){
    int n, l;
    cin >> n >> l;

    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        if (i < l) dp[i] = dp[i -1];
        else dp[i] = (dp[i-1] + dp[i-l]) % mod;
    }

    cout << dp[n] << endl;
    return 0;
}
