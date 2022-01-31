#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

vector<int> dp(100010, 0);
const int INF = 1000000;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i < 100010; i++) {
        dp[i] = INF;
        int pow = 1;
        while (pow <= i) {
            dp[i] = min(dp[i], dp[i - pow] + 1);
            pow *= 6;
        }
        int power = 1;
        while (power <= i) {
            dp[i] = min(dp[i], dp[i - power] + 1);
            power *= 9;
        }
    }
    cout << dp[N] << endl;
    return 0;
}
