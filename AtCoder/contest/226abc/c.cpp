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
    vector<int> t(n), k(n);
    vector<vector<int>> a(n);
    rep(i,n) {
        cin >> t[i] >> k[i];
        rep(j,k[i]) {
            int b;
            cin >> b;
            a[i].push_back(b);
        }
    }
    queue<int> q;
    rep(i,k[n-1]) q.push(a[n-1][i]);

    vector<bool> check(n, true);
    ll ans = t[n-1];
    while(q.size()) {
        int qi = q.front(); q.pop();
        --qi;
        if(check[qi]) {
            ans += t[qi];
            check[qi] = false;
            if(k[qi] == 0) continue;
            else rep(i,k[qi]) q.push(a[qi][i]);
        }
    }

    cout << ans << endl;
    return 0;
}
