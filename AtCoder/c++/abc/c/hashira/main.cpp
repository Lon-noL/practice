#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int main() {
    int N;
    cin >> N;
    vector<long long> a(100100);
    rep(i,N) cin >> a[i];

    vector<ll> dp(100100, INF);
    dp[0] = 0;

    for (int i = 0; i < N-1; i++) {
        chmin(dp[i+1], dp[i] + abs(a[i+1] - a[i]));
        if (i < N - 2) chmin(dp[i+2], dp[i] + abs(a[i+2] - a[i]));
    }
    cout << dp[N-1] << endl;
    return 0;
}
