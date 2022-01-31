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
    vector<int> s(n);
    rep(i,n) cin >> s[i];

    vector<vector<int>> key(143, vector<int>(143));
    for(int i = 1; i <= 142; i++) {
        for(int j = 1; j <= 142; j++) {
            if(4*i*j + 3*i + 3*j >= 1000) {
                key[i][j] = 4*i*j + 3*i + 3*j;
            }
        }
    }

    int ans = 0;
    rep(k, n) {
        for(int i = 1; i <= 142; i++) {
            for(int j = 1; j <= 142; j++) {
                if(s[k] == )
            }
        }
    }
    return 0;
}
