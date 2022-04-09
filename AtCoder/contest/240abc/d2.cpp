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

int main() {
    int n;
    cin >> n;
    vector<P> d;
    // P = <今入っている番号、連続している個数>
    d.emplace_back(-1,0);
    int ans = 0;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        ans++;
        if(d.back().first == a) {
            d.back().second++;
        }
        else {
            d.emplace_back(a,1);
        }
        // 消す作業
        if(d.back().first == d.back().second) {
            ans -= d.back().second;
            d.pop_back();
        }
        printf("%d\n", ans);
    }
    return 0;
}
