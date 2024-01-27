#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    rep(i,n) {
        int c;
        cin >> c;
        if(c == a + b) {
            cout << i+1 << endl;
            return 0;
        }
    }
    return 0;
}
