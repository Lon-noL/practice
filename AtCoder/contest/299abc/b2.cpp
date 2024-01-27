#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using P = pair<int,int>;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> c(n), r(n);
    rep(i,n) cin >> c(i);
    rep(i,n) cin >> r(i);

    int ans = 0;
// ラムダ式
    // 色がtと同じなら２、c[0]と同じなら１、それ以外なら０
    // 色を０、１、２で強さ分けして、pair型で持つ
    auto get = [&](int i) {
        int x = 0;
        if(c[i] == t) x = 2;
        else if(c[i] == c[0]) x = 0;
        return P(x, r[i]);
    };

    // aとb、2つを色→数字の順で比較する
    auto win = [&](int a, int b) {
        return get(a) < get(b);
    };

    // winがtrueならiの方が強い
    rep(i,n) {
        if(win(ans,i)) ans = i;
    }
    cout << ans + 1 << endl;
    return 0;
}
