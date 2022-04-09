#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
using P = pair<int,int>;

// 平行二分探索木

int main() {
    int q;
    cin >> q;
    //重複した値を持てるset
    multiset<ll> s;

    rep(i,q) {
        int type; ll x;
        cin >> type >> x;

        if(type == 1) {
            s.insert(x);
        }
        else {
            int k;
            cin >> k;
            ll ans = -1;

            if(type == 2) {
                auto itr = s.upper_bound(x);
                bool ok = true;
                rep(i,k) {
                    if(itr == s.begin()) {
                        ok = false;
                        break;
                    }
                    --itr;
                }
                if(ok) ans = *itr;
            }
            else {
                auto itr = s.lower_bound(x);
                bool ok = true;
                rep(i,k-1) {
                    if(itr == s.end()) {
                        ok = false;
                        break;
                    }
                    ++itr;
                }
                if(ok && itr != s.end()) ans = *itr;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
