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

    vector<int> a(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i];

    vector<ll> dp1(n+1), dp2(n+1);
    dp1[0] = 0;
    dp2[0] = 0;

    for(int i = 1; i <= n; i++) {
        // dp1　が一個先をいく　dp2　は一個前までの最大値を取る
        dp1[i] = dp2[i - 1] + a[i];
        dp2[i] = max(dp1[i - 1], dp2[i - 1]);
    }

    cout << max(dp1[n], dp2[n]) << endl;
    return 0;
}

/*
   int n;
    cin >> n;

    vector<int> a(n+1);
    for(int i = 1; i < n+1; i++) cin >> a[i];

    vector<ll> dp(n+1,def);
    dp[0] = 0;

    for(int i = 1; i < n+1; i++) {
        if(i <= 2)
            dp[i] = a[i];
        else
            dp[i] = max(dp[i-1], dp[i-2] + a[i]);
    }

    ll ans = 0;
    rep(i,n+1) ans = max(ans, dp[i]);

    cout << ans << endl;
    */
