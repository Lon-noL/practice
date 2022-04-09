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

    double b, r;
    rep(i,n) {
        double x;
        cin >> x;
        b += x;
    }
    rep(i,n) {
        double y;
        cin >> y;
        r += y;
    }

    printf("%.6f\n", (b/n) + (r/n));
    return 0;
}
