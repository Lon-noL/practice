#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

ll f(ll a, ll b) {
    return (a*a*a + a*a*b + a*b*b + b*b*b);
}

int main() {
    ll n;
    cin >> n;

    ll x = 8e18;
    ll i = 0, j = 1000000;

    while(i <= j) {
        ll cf = f(i,j);
        if(cf >= n) {
            x = min(x,cf);
            j--;
        }
        else {
            i++;
        }
    }
    cout << x << endl;
    return 0;
}
