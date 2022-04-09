#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, r;
    cin >> n >> r;

    ll x = 1;
    ll y = 1;

    rep(xi, r) x *= (n - xi);
    rrep(yi,r,1) y *= yi;

    ll ans = x / y;
    cout << ans << endl;
    return 0;
}
