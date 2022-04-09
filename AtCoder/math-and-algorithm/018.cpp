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
    int n;
    cin >> n;

    vector<ll> v(4);

    rep(i,n) {
        int a;
        cin >> a;
        if(a == 100) v[0]++;
        if(a == 200) v[1]++;
        if(a == 300) v[2]++;
        if(a == 400) v[3]++;
    }

    ll ans = (v[0] * v[3]) + (v[1] * v[2]);

    cout << ans << endl;
    return 0;
}
