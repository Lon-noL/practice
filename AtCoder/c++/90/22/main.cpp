#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

ll gcd(ll x, ll y) {
    if(x < y) swap(x, y); //この式はなくても良い。

    while (y > 0) {
        ll r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main(){
    ll a, b, c;
    cin >> a >> b >> c;

    ll x = 0, y = 0;
    x = gcd(a,b);
    y = gcd(c,x);

    ll ans = 0;
    ans += (a/y + b/y + c/y - 3);
    cout << ans << endl;
    return 0;
}
