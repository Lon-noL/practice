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
    int h, w;
    cin >> h >> w;

    vector<vector<int>> b(w,vector<int>(h));

    rep(i,h) rep(j,w) cin >> b[j][i];
    rep(i,w) {
        rep(j,h) {
            cout << b[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
