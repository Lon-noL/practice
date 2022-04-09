#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using P = pair<int,int>;

set<P> f() {
    set<P> res;
    int sx, sy;
    cin >> sx >> sy;

    for(int x = -2; x <= 2; ++x) {
        for(int y = -2; y <= 2; ++y) {
            if(x*x + y*y != 5) continue;
            res.emplace(sx+x, sy+y);
        }
    }
    return res;
}

int main() {
    auto as = f();
    auto bs = f();

    for(P p : bs) {
        if(as.count(p)) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
