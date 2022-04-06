#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    set<int> s;
    for(int i = 0; i <= 30; i++) {
        for(int j = 0; j <= 40; j++) {
            for(int k = 0; k <= 20; k++) {
                ll sum;
                sum = 205 * i + 82 * j + 30 * k;
                s.insert(sum);
            }
        }
    }

    int ans = s.size();
    cout << ans-1 << endl;
    return 0;
}
