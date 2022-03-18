#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
using P = pair<int,int>;

int main() {
    string s;
    int q;
    cin >> s >> q;
    rep(qi,q) {
        ll t, k;
        cin >> t >> k;
        k--;
        int si = 0;
        if(t <= 60) {
            ll b = 1ll<<t;
            si = k/b;
            k %= b;
        }
        ll r = _builition_popcountll(k);
        ll l = t - r;
        ll x = l + r*2 + (s[si] - 'A');
        char ans = 'A' + (x % 3);
        cout << ans << endl;
    }
    return 0;
}
