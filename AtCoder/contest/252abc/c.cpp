#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (ll i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;

    vector<string> s(n);
    rep(i,n) cin >> s[i];

    vector<ll> reel(10);
    rep(i,10) {
        int now = s[0][i] - '0';
        ll stop = i;
        ll dup = 0;
        set<int> bingo;
        bingo.insert(i);
        for(int j = 1; j < n; j++) {
            rep(k,10) {
                if(s[j][k] - '0' == now) {
                    stop = max(stop, k);
                    if(bingo.count(k)) {
                        dup++;
                        stop = max(stop, k + dup * 10);
                    }
                    bingo.insert(k);
                }
            }
        }
        reel[now] = stop;
    }

    ll ans = 1001001001001001001;
    rep(i,10) {
        ans = min(ans,reel[i]);
    }

    cout << ans << endl;
    return 0;
}
