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
    vector<int> h(n);
    rep(i,n) cin >> h[i];

        int now = h[0];
    for(int i = 1; i < n; i++) {
        int nex = h[i];
        if(now < nex) now = nex;
        else {
            cout << now << endl;
            return 0;
        }
    }
    cout << now << endl;
    return 0;
}
