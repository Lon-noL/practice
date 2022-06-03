#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int h, w;
    cin >> h >> w;
    vector<P> piece(2);
    char c;
    int cnt = 0;
    rep(i,h) rep(j,w) {
        cin >> c;
        if(c == 'o'){
            piece[cnt] = make_pair(i,j);
            cnt++;
        }
    }

    int ans = abs(piece[0].first - piece[1].first) + abs(piece[0].second - piece[1].second);
    cout << ans << endl;
    return 0;
}
