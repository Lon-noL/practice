#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

bool isprime(ll n) {
    for(ll i = 2; i*i <= n; i++) if(n % i == 0) return false;
    return true;
}

ll divisor(ll n) {
    for(ll i = 2; i*i <= n; i++) {
        if(n % i != 0) continue;
        return i;
    }
    return n;
}

int main() {
    ll n;
    cin >> n;

    while(n > 1) {
        if(isprime(n)) {
            cout << n << endl;
            return 0;
        }
        ll ans = divisor(n);
        cout << ans << endl;
        n /= ans;
    }
    return 0;
}
