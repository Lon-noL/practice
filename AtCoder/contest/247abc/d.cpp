#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int q;
    cin >> q;
    queue<int> que;

    rep(i,q) {
        int a;
        cin >> a;
        int j = 0;
        ll ans = 0;
        if(a == 1) {
            int x, c;
            cin >> x >> c;
            while(j < c) {
                que.push(x);
                j++;
            }
        }
        else {
            int c;
            cin >> c;
            while(j < c) {
                ans += que.front();
                que.pop();
                j++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
