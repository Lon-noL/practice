#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n,vector<int>(n)), b(n,vector<int>(n)), a1(n,vector<int>(n)), a2(n,vector<int>(n)), a3(n,vector<int>(n));
    rep(i,n) rep(j,n) {
        int m;
        cin >> m;
        a[i][j] = m;
        a1[n-1-j][i] = m;
        a2[n-1-i][n-1-j] = m;
        a3[j][n-1-i] = m;
    }
    rep(i,n) rep(j,n) cin >> b[i][j];

    bool flag = true;
    rep(i,n) rep(j,n) {
        if(a[i][j] == 1 && b[i][j] == 0) {
            flag = false;
            break;
        }
    }
    if(flag) {
        cout << "Yes" << endl;
        return 0;
    }
    else {
        flag = true;
        rep(i,n) rep(j,n) {
            if(a1[i][j] == 1 && b[i][j] == 0) {
                flag = false;
                break;
            }
        }
    }
    if(flag) {
        cout << "Yes" << endl;
        return 0;
    }
    else {
        flag = true;
        rep(i,n) rep(j,n) {
            if(a2[i][j] == 1 && b[i][j] == 0) {
                flag = false;
                break;
            }
        }
    }
    if(flag) {
        cout << "Yes" << endl;
        return 0;
    }
    else {
        flag = true;
        rep(i,n) rep(j,n) {
            if(a3[i][j] == 1 && b[i][j] == 0) {
                flag = false;
                break;
            }
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
