#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const double INF = 1001001;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    rep(i,k) {
        cin >> a[i];
        a[i]--;
    }
    vector<int> x(n), y(n);
    rep(i,n) {
        cin >> x[i] >> y[i];
    }
    double ans = 0;
    for(int i = 0; i < n; i++) {
        double mn = INF;
        for(int j = 0; j < k; j++) {
            mn = min(mn, hypot(x[i] - x[a[j]], y[i] - y[a[j]]));
        }
        ans = max(ans, mn);
    }
    cout <<  fixed << setprecision(10) << ans << endl;
    return 0;
}
