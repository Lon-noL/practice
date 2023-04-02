#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int r, c;
    cin >> r >> c;
    vector<string> b(r);
    for(int i = 0; i < r; i++) cin >> b[i];

    vector<vector<bool>> ex(r, vector<bool>(c));
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(isdigit(b[i][j])) {
                int d = b[i][j] - '0';
                rep(ni,r)rep(nj,c) {
                    if(abs(i - ni) + abs(j - nj) <= d) {
                        ex[ni][nj] = true;
                    }
                }
            }
        }
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(ex[i][j]) b[i][j] = '.';
        }
    }
    rep(i,r) cout << b[i] << endl;
    return 0;
}
