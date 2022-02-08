#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

map<pair<ll,ll>, bool> mp;

bool f(ll a, ll s) {
    if(!s) return a==0;

    auto p = make_pair(a,s);
    if(mp.count(p)) return mp[p];

    rep(x,2) rep(y,2) {
        if((x&y) != (a&1)) continue;
        if(s-x-y < 0) continue;
        if((s-x-y) % 2 != 0) continue;
        if(f(a>>1, (s-x-y)>>1)) return mp[p] = true;
    }
    return mp[p] = false;
}

void solve() {
    ll a, s;
    cin >> a >> s;

    if(f(a,s)) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() {
    int t;
    cin >> t;

    rep(ti,t) solve();
    return 0;
}
