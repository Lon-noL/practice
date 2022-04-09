#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

const int mod = 1000000007;

int main(){
    int n;
    cin >> n;
    vector<int> c(n);
    rep(i,n) cin >> c.at(i);
    sort(c.begin(), c.end());

    int ans = 1;
    rep(i,n){
        ans = ((ll)ans * max(c.at(i)-i, 0)) % mod;
    }
    cout << ans << endl;
    return 0;
}
