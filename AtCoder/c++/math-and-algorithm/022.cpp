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

    vector<ll> v(100000);

    rep(i,n) {
        int a;
        cin >> a;

        v[a]++;
    }

    ll ans = 0;
    for(int i = 1; i < 50000; i++) {
        ans += v[i] * v[100000 - i];
    }

     if(v[50000]) ans += C(v[50000], 2);

    cout << ans << endl;
    return 0;
}
