#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W));
    rep(i,H) rep(j,W) cin >> A[i][j];

    rep(i,H-1) {
        for(int i2 = i; i2 < H; i2++) {
            rep(j,W-1) {
                for(int j2 = j; j2 < W; j2++) {
                    if(!(A[i][j] + A[i2][j2] <= A[i2][j] + A[i][j2])) {
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}
