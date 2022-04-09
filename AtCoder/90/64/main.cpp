#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

    ll n, q;
    ll ans = 0;

int main(){
    cin >> n >> q;
    vector<ll> a(100010);
    for (int i = 1; i <= n; i++) cin >> a.at(i);
    vector<ll> l(100010), r(100010), v(100010);
    for (int i = 1; i <= q; i++) cin >> l.at(i) >> r.at(i) >> v.at(i);

    vector<ll> b(100010);
    for (int i = 1; i < n; i++) {
        b[i] = a[i + 1] - a[i];
        ans += abs(b[i]);
    }

    for (int i = 1; i <= q; i++) {
        ll mae = abs(b[l[i] - 1]) + abs(b[r[i]]);
        if (l[i] >= 2) b[l[i] - 1] += v[i];
        if (r[i] <= n - 1) b[r[i]] -= v[i];
        ll ato = abs(b[l[i] - 1]) + abs(b[r[i]]);
        ans += (ato - mae);
        cout << ans << endl;
    }
    return 0;
}
