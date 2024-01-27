#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for(int i = 0; i < (n); i++)

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> c(n), r(n);
    rep(i,n) cin >> c[i];
    rep(i,n) cin >> r[i];

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(c[i] == t) {
            cnt++;
        }
    }
    int color = t;
    if(cnt == 0) {
        color = c[0];
    }

    int win = -1, mx = -1;
    for(int i = 0; i < n; i++) {
        if(c[i] != color) continue;
        if(mx < r[i]) {
            mx = r[i];
            win = i + 1;
        }
    }

    cout << win << endl;
    return 0;
}
