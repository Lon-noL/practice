#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    rep(i,n) cin >> a.at(i);
    rep(i,n) cin >> b.at(i);
    rep(i,n) cin >> c.at(i);

    vector<int> am(46), bm(46), cm(46);
    for (int i = 0; i < n; ++i){
        ++am.at(a.at(i)%46);
        ++bm.at(b.at(i)%46);
        ++cm.at(c.at(i)%46);
    }

    ll ans = 0;
    for (int i = 0; i < 46; i++){
        for (int j = 0; j < 46; j++){
            for (int k = 0; k < 46; k++){
                if ((i+j+k)%46 == 0){
                    ans += (ll)(am.at(i))*bm.at(j)*cm.at(k);
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
