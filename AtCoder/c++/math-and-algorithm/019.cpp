#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll C(ll x, ll y) {
    ll X = 1;
    ll Y = 1;

    rep(xi, y) X *= (x - xi);
    rrep(yi,y,1) Y *= yi;

    return (X / Y);
}

int main() {
    int n;
    cin >> n;

    vector<ll> v(3);

    rep(i,n) {
        int a;
        cin >> a;
        if(a == 1) v[0]++;
        if(a == 2) v[1]++;
        if(a == 3) v[2]++;
    }

    ll ans = 0;
    rep(i,3) ans += C(v[i], 2);

    cout << ans << endl;
    return 0;
}
