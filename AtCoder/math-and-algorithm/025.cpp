#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n;
    cin >> n;

    double ans = 0.0;
    vector<double> a(n), b(n);

    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];

    rep(i,n) {
        ans += (a[i] / 3.0 + b[i] * 2.0 / 3.0);
    }
    printf("%.12lf\n", ans);
    return 0;
}
