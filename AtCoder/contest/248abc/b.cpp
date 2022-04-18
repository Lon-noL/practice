#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll a, b, k;
    cin >> a >> b >> k;
    int cnt = 0;

    while(a < b) {
        a *= k;
        cnt++;
    }

    cout << cnt << endl;
    return 0;
}
