#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

ll f(ll r, ll m) {
    return r / m;
}
int main() {
    ll A, M, L, R;
    cin >> A >> M >> L >> R;

    L -= A;
    R -= A;
    if (L < 0) {
        ll X = -L / M + 1;
        L += X * M;
        R += X * M;
    }
    ll ans = f(R, M) - f(L - 1, M);
    cout << ans << endl;
    return 0;
}

