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
    double a, b, c, x;
    cin >> a >> b >> c >> x;

    double ans;

    if(x <= a) {
        ans = 1;
    }
    if(x > b) {
        ans = 0;
    }
    else {
        ans = c / (b - a);
    }
    printf("%.10f\n", ans);
    return 0;
}
