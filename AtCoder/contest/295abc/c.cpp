#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    map<int, int> a;
    rep(i,n) {
        int b;
        cin >> b;
        ++a[b];
    }

    int ans = 0;
    for(auto [col,num] : a) {
        ans += num / 2;
    }
    cout << ans << endl;
    return 0;
}
