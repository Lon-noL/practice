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
    int n, m;
    cin >> n >> m;

    vector<string> s(n), t(m);
    rep(i,n) cin >> s[i];
    rep(i,m) cin >> t[i];

    int j = 0;

    rep(i,n) {
        if(s[i] == t[j]) {
            cout << "Yes" << endl;
            j++;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}
