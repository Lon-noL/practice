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
    vector<int> xv(q);
    vector<int> cv(q);

    int j = 0;
    rep(i,q) {
        int a;
        cin >> a;
        int k = 0;
        ll ans = 0;
        ll sum;
        if(a == 1) {
            int x, c;
            cin >> x >> c;
            xv[j] = x;
            cv[j] = c;
            j++;
        }
        else {
            int c;
            cin >> c;
            while(c) {
                sum = xv[k];
                if(c < cv[k]) {
                    sum *= c;
                    cv[k] -= c;
                    c = 0;
                }
                else {
                    sum *= cv[k];
                    c -= cv[k];
                    j--;
                }
                ans += sum;
                k++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
