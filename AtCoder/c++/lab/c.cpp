#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    double ans = 0.0;
    double i = 1.0;
    while(true) {
        ans += 1.0 / i;
        if(ans > 12) {
            cout << i << endl;
            return 0;
        }
        i++;

    }
    return 0;
}
