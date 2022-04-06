#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll ans = 0;
    for(int i = 0; i <= 80; i++) {
        ans += i*i*i*i;
    }
    cout << ans << endl;
    return 0;
}
