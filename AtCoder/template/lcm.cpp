#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

ll GCD(ll a, ll b);
ll LCM(ll a, ll b);

int main(){
    ll a, b;
    cin >> a >> b;

    ll ans = LCM(a,b);
    cout << ans << endl;
    return 0;
}

ll GCD(ll a, ll b){
    if (b == 0)
        return a;
    else
        return GCD(b, a%b);
}

ll LCM(ll a, ll b){
    ll d = GCD(a, b);
    return a/d*b;
}
