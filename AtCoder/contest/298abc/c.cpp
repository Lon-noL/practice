#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n,q;
    cin >> n >> q;
    map<int, multiset<int>> st1;
    map<int, set<int>> st2;

    for(int k = 0; k < q; k++) {
        int t;
        cin >> t;
        if(t == 1) {
            int i, j;
            cin >> i >> j;
            st1[j].insert(i);//箱jには数iが入っている
            st2[i].insert(j);//数iは箱jに入っている
        }
        if(t == 2) {
            int i;
            cin >> i;
            for(auto value : st1[i]) {
                cout << value << ' ';
            }
            cout << endl;
        }
        if(t == 3) {
            int i;
            cin >> i;
            for(auto value : st2[i]) {
                cout << value << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}
