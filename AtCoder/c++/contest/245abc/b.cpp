#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);


    set<int> s;
    rep(i, 2001) s.insert(i);
    rep(i,n) {
        int x;
        cin >> x;
        s.erase(x);
    }
    int ans = *s.begin();
    cout << ans << endl;
    return 0;
}
