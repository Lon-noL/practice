#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

bool check(vector<vector<char>> v, int n, int i, int j, int cnt, int skip) {
    if(cnt == 6) return true;

    if(v[i+1][j] == '#' && i != n-1) {
        cnt++;
        check(v,n,i+1,j,cnt,skip);
    }
    if(v[i+1][j+1] == '#' && i != n-1 && j != n-1) {
        cnt++;
        check(v,n,i+1,j+1,cnt,skip);
    }
    if(v[i+1][j-1] == '#' && i != n-1 && j != 0) {
        cnt++;
        check(v,n,i+1,j-1,cnt,skip);
    }
    if(v[i][j+1] == '#' && j != n-1) {
        cnt++;
        check(v,n,i,j+1,cnt,skip);
    }
    if(v[i][j-1] == '#' && j != 0) {
        cnt++;
        check(v,n,i,j-1,cnt,skip);
    }
    if(v[i-1][j] == '#' && i != 0) {
        cnt++;
        check(v,n,i-1,j,cnt,skip);
    }
    if(v[i-1][j+1] == '#' && i != 0 && j != n-1) {
        cnt++;
        check(v,n,i-1,j+1,cnt,skip);
    }
    if(v[i-1][j-1] == '#' && i != 0 && j != 0) {
        cnt++;
        check(v,n,i-1,j-1,cnt,skip);
    }
// 2 masu
    if(v[i+2][j] == '#' && skip <= 2  && i != n-2) {
        cnt++;
        skip++;
    check(v,n,i+2,j,cnt,skip);
    }
    if(v[i+2][j+2] == '#' && skip <= 2 && i != n-2 && j != n-2) {
        cnt++;
        skip++;
        check(v,n,i+2,j+2,cnt,skip);
    }
    if(v[i+2][j-2] == '#' && skip <= 2 && i != n-2 && j > 1) {
        cnt++;
        skip++;
        check(v,n,i+2,j-2,cnt,skip);
    }
    if(v[i][j+2] == '#' && skip <= 2 && j != n-2) {
        cnt++;
        skip++;
        check(v,n,i,j+2,cnt,skip);
    }
    if(v[i][j-2] == '#' && skip <= 2 && j > 1) {
        cnt++;
        skip++;
        check(v,n,i,j-2,cnt,skip);
    }
    if(v[i-2][j] == '#' && skip <= 2 && i != 2) {
        cnt++;
        skip++;
        check(v,n,i-2,j,cnt,skip);
    }
    if(v[i-2][j+2] == '#' && skip <= 2 && i > 1 && j != n-2) {
        cnt++;
        skip++;
        check(v,n,i-2,j+2,cnt,skip);
    }
    if(v[i-2][j-2] == '#' && skip <= 2 && i > 1 && j > 1) {
        cnt++;
        skip++;
        check(v,n,i-2,j-2,cnt,skip);
    }
    else return false;
}


int main() {
    int n;
    cin >> n;

    vector<vector<char>> v(n, vector<char>(n));
    rep(i,n)rep(j,n) cin >> v[i][j];

    rep(i,n) {
        rep(j,n) {
            if(v[i][j] == '#') {
                int cnt = 1;
                int skip = 0;
                if(check(v,n,i,j,cnt,skip)) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}
