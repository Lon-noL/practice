#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
// 自作　WA
int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i,n) cin >> x[i] >> y[i];

    int deg = 0;
    rep(i,n) rep(j,i) rep(k,j) {
    ll xa = x[j] - x[i];
    ll ya = y[j] - y[i];
    ll xb = x[k] - x[i];
    ll yb = y[k] - y[i];

        if(xa * yb == xb * ya) ++deg;
    }
    if(deg) deg++;
    cout << (n - deg) * 2 << endl;
    return 0;
}
