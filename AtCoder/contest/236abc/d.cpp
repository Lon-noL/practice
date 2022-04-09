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
    int n;
    cin >> n;
    int N = n*2;

    vector<vector<int>> a(N-1,vector<int>(N-1));

    int nj = N-1;
    rep(i,N-1) {
        rep(j,nj) {
            cin >> a[i][j];
        }
        nj -= 1;
    }


    return 0;
}

