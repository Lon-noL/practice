#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
using mint = modint998244353;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

mint sum(ll x) {
    return mint(1+x)*x/2;
}

int main() {
    ll n;
    cin >> n;
    ll l = 1;
    mint ans;
    while(l <= n) {
        ll r = l*10;
        ll len = min(n+1, r) - l;
        ans += sum(len);
        l *= 10;
    }
    cout << ans.val() << endl;
    return 0;
}
