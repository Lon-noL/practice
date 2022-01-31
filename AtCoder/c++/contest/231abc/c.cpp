#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());

    int x;
    rep(i,q) {
        cin >> x;
        auto itr = lower_bound(a.begin(), a.end(), x);
        cout << a.end() - itr << endl;
    }
    return 0;
}
