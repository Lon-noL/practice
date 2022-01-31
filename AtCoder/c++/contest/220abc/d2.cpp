#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
/*
#include <atcoder/all>
using mint = modint998244353;

int main() {
    int N; cin >> N;
    vector<int> a(N);
    rep(i,N) cin >> a[i];
    vecetor<mint> dp(10);
    dp[a[0]] = 1;
    for(int i = 0; i < N; ++i) {
        int na = a[i];
        vector<mint> p(10);
        swap(p, dp);
        rep(j,10) {
            dp[(j + na) % 10] += p[j];
            dp[(j * na) % 10] += p[j];
        }
    }
    rep(i,10) cout << dp[i].val() << endl;
    return 0;
}
*/
