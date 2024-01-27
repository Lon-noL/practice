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
    vector<string> v(h);
    rep(i,h) cin >> v[i];
    vector<int> vec;

    rep(i,h) {
        rep(j,w) {
            if(v[i][j] == '#') {
                int cnt = 0;
                int vi = i;
                int vj = j;
                while(v[i][j] == '#' && vi < h && vj < w) {
                    cnt++;
                    v[vi][vj] = '.';
                    vi++;
                    vj++;
                }
                vec.push_back(cnt / 2);
            }
        }
    }
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;;
    }/*
    int m = -1;
    for(int i = 0; i < vec.size(); i++) {
        m = max(m, vec[i]);
    }
    vector<int> ans(m);
    rep(i,m) {
        ans[vec[i] - 1]++;
    }
    rep(i,m) cout << ans[i] << ' ';
    cout << endl;*/
    return 0;
}
