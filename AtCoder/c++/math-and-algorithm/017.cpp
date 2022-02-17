#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll GCD(ll A, ll B) {
    while(A >= 1 && B >= 1) {
        if(A > B) A = A % B;
        else B = B % A;
    }
    if(A >= 1) return A;
    return B;
}

ll LCM(ll a, ll b) {
    return (a / GCD(a, b)) * b;
}

int main() {
    int n;
    cin >> n;

    vector<ll> v(n+1);
    for(int i = 1; i <= n; i++) cin >> v[i];

    ll ans = LCM(v[1], v[2]);
    for(int i = 3; i <= n; i++){
        ans = LCM(ans, v[i]);
    }

    cout << ans << endl;
    return 0;
}
