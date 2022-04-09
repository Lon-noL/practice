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
    ll x;
    cin >> x;

    ll ans = 0;
    if(x >= 0) {
        ans = x / 10;
    }
    else {
        if(x % 10 == 0) {
            ans = x / 10;
        }
        else {
            ans = x / 10 - 1;
        }
    }
    cout << ans << endl;
    return 0;
}
