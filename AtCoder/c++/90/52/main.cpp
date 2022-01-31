#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
const int mod = 1000000007;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i,n) {
        rep(j,6){
            int x;
            cin >> x;
            v.at(i) += x;
        }
    }

    ll ans = 1;
    rep(i,n) (ans *= v.at(i)) %= mod;
    cout << ans << endl;
    return 0;
}
