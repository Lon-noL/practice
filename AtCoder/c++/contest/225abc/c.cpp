#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> b(n, vector<int>(m));
    rep(i,n) rep(j,m) cin >> b[i][j];

    rep(i,n) {
        rep(j,m-1) {
            if(b[i][j+1] - b[i][j] != 1) {
                cout << "No" << endl;
                return 0;
            }
            if(b[i][j] % 7 == 0) {
                cout << "No" << endl;
                return 0;
            }
        }
        if(i < n-1) {
            if(b[i+1][0] - b[i][0] != 7) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
