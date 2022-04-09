#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

vector<ll> box;

int main(){
    int q;
    cin >> q;
    vector<ll> p(q), x(q);
    rep(i,q) {
        cin >> p.at(i);
        if (p.at(i) == 1 || p.at(i) == 2) cin >> x.at(i);
    }

    ll p2 = 0;
    rep(i,q) {
        if(p[i] == 1) {
            box.push_back(x[i]);
        }
        if(p[i] == 2) {
            rep(j,box.size()){
                box[j] += x[i];
            }
        }
        if(p[i] == 3) {
            sort(box.begin(), box.end());
            ll ans = box.at(0) + p2;
            cout << ans << endl;
            box.erase(box.begin());
        }
    }
    return 0;
}
