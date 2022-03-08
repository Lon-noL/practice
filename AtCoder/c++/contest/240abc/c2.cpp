#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using P = pair<int, int>;

// メモ化再帰

int n, X;
vector<int> a, b;
map<P,bool> memo;

bool f(int i, int x) {
    if(i == n) return x == X;
    P arg(i,x);
    if(memo.count(arg)) return memo[arg];
    bool res = false;
    if(f(i+1, x+a[i]) || f(i+1, x+b[i])) res = true;
    return memo[arg] = res;
}

int main() {
    cin >> n >> X;
    a = vector<int>(n);
    b = vector<int>(n);
    rep(i,n) cin >> a[i] >> b[i];
    if(f(0,0)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
