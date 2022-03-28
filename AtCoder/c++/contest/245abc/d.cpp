#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n+1), b(m+1), c(n+m+1);
    rep(ai,n+1) cin >> a[ai];
    rep(ci,n+m+1) cin >> c[ci];

    for(int i = m; i >= 0; --i) {
        b[i] = c[n+i] / a[n];
        rep(j,n+1) {
            c[i+j] -= a[j] * b[i];
        }
    }

    rep(i,m+1) cout << b[i] << endl;
    return 0;
}
