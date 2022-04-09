#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
// 繰り返し２乗法
const int mod = 1000000007;

ll modPow(ll n, ll k) {
    if (n == 1) return k % mod;
    if (n % 2 == 1) return (k * modPow(n - 1, k)) % mod;
    ll t = modPow (n / 2, k);
    return (t * t) % mod;
}

int main() {
    ll n; ll k;
    cin >> n >> k;

    if (n == 0 || k == 0) {
        cout << 0 << endl;
        return 0;
    }
    if (n == 1) {
        cout << k << endl;
        return 0;
    }
    if (k == 1) {
        cout << 0 << endl;
        return 0;
    }
    ll ans = k * (k - 1) % mod;
    if (n == 2) {
        cout << ans << endl;
        return 0;
    }
    if (k == 2) {
        cout << 0 << endl;
        return 0;
    }
    else cout << (ans * modPow(n - 2, k - 2)) % mod << endl;
    return 0;
}
