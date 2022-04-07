#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    ll ans = 0;
    rep(i,n) ans += a[i];

    ll used = 0;
    rep(i,n) used += a[i] / x;
    used = min(used, k);
    k -= used;
    ans -= used * x;

    rep(i,n) a[i] %= x;
    sort(a.begin(), a.end());

    for(int i = n-1; i >= 0; i--) {
        if(k == 0) break;
        ans -= a[i];
        k--;
    }

    cout << ans << endl;
    return 0;
}
