#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;

    vector<double> x(n), y(n);
    rep(i,n) cin >> x[i] >> y[i];

    double ans = 100100100100100.0;
    rep(i,n) {
        for(int j = i+1; j < n; j++) {
            double X = abs(x[i] - x[j]);
            double Y = abs(y[i] - y[j]);
            double Z = sqrt(X*X + Y*Y);
            ans = min(ans, Z);
        }
    }
    printf("%.10f\n", ans);
    return 0;
}
