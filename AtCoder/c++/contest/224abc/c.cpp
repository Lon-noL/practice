#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using P = pair<int,int>;

int main() {
    int N;
    cin >> N;

    vector<ll> x(N), y(N);
    rep(i,N) cin >> x[i] >> y[N];
    int ans = 0;
    rep(i,N) rep(j,i) rep(k,j) {
        ll xa = x[j] - x[i];
        ll ya = y[j] - y[i];
        ll xb = x[k] - x[i];
        ll yb = y[k] - y[i];

        if(xa * yb != xb * ya) ++ans;
    }
    cout << ans << endl;
    return 0;
}
