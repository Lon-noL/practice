#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n;
    cin >> n;
    vector<double> a(n), b(n);
    rep(i,n) cin >> a[i] >> b[i];
    double t = 0;
    rep(i,n) t += a[i]/b[i];
    t /= 2; // 二つの火種がぶつかるまでの時間
    double ans = 0;
    rep(i,n) {
        double nt = a[i]/b[i];
    if(nt > t) {
        ans += b[i] * t;
        break;
    }
    ans += b[i] * nt;
    t -= nt;
    }
    printf("%.10f\n", ans);
    return 0;
}
