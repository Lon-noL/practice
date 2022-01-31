#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n;
    ll k;
    cin >> n >> k;

    vector<int> a(n);
    rep(i,n) cin >> a.at(i);

    vector<ll> ans(n, k/n);
    k %= n;
    vector<P> p(n);
    rep(i,n) p.at(i) = P(a.at(i), i);
    sort(p.begin(), p.end());
    rep(i,k) ans.at(p.at(i).second)++;

    rep(i,n) cout << ans.at(i) << endl;
    return 0;
}
