#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

const ll INF = 1LL << 60;

int main() {
    int N;
    cin >> N;

    vector<ll> dp(100010, INF);
    dp[0] = 0;

    for (int i = 1; i <= N; i++) {
        dp[i] = min(dp[i], dp[i-1] + 1);
        int power = 6;
        while (power <= i) {
            dp[i] = min(dp[i], dp[i - power] + 1);
            power *= 6;
        }
        int pow = 9;
         while (pow <= i) {
            dp[i] = min(dp[i], dp[i - pow] + 1);
            pow *= 9;
        }
    }

    cout << dp[N] << endl;
    return 0;
}
