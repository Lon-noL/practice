#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n+1), b(m+1), c(n+m+1);
    rep(ai,n+1) cin >> a[ai];
    rep(ci,n+m+1) cin >> c[ci];

    b[0] = c[0] / a[0];
    int keisu = 1;
    rep(i,n+m+1) rep(j,n+1) {
        if(i+j == keisu) {
            b[j] = (c[j] - (b[i] * a[j])) / a[i];
        }
    }

    rep(i,m-n+1) cout << b[i] << endl;
    return 0;
}
