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

int main() {
    int n;
    cin >> n;

    vector<ll> v(n);
    rep(i,n) cin >> v[i];

    for(int i = 1; i < n; i++) {
        v[0] = GCD(v[0], v[i]);
    }

    cout << v[0] << endl;
    return 0;
}
