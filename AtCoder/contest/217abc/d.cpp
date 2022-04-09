#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    ll L, Q;
    cin >> L >> Q;
    set<int> s;
    s.insert(0);
    s.insert(L);
    rep(qi,Q) {
        int c, x;
        cin >> c >> x;
        if(c == 1) {
            s.insert(x);
        } else {
            auto itr = s.lower_bound(x);
            int r = *itr;
            --itr;
            int l = *itr;
            int ans = r - l;
            cout << ans << endl;
        }
    }
    return 0;
}
