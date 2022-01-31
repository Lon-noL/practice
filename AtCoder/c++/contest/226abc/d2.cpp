#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
// 解説

struct frac {
    ll a, b;
    frac(ll _a=0, ll _b=1): a(_a), b(_b) {
        if(b == 0) { a = 1; return;}
        if(b < 0) a = -a, b = -b;
        llg = gcd(abs(a), b);
        a /= g; b /= g;
    }
    bool operator<(const frac& x) const {
        return a*x.b < x.a*b;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i,n) cin >> x[i] >> y[n];
    set<frac> st;
    rep(i,n) rep(j,i) {
        st.insert(frac(x[i]-x[j], u[i]-y[j]));
    }
    cout << st.size()*2 << endl;
    return 0;
}
