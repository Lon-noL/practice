#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

vector<int> dep;
vector<vector<int>> to;

void dfs(int v, int _dep=0, int p=-1) {
    dep[v] = _dep;
    for (int u :to[v]) {
        if (u == p) continue;
        dfs(u, _dep+1, v);
    }
}

int main(){
    int n, q;
    cin >> n >> q;
    to.resize(n);
    // 辺の情報を読み込む
    rep(i,n-1){
        int a, b;
        cin >> a >> b;
        --a; --b;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    dep.resize(n);
    dfs(0);

    rep(qi,q) {
        int c, d;
        cin >> c >> d;
        --c; --d;
        int ans = (dep[c]+dep[d])%2;
        if (ans == 0) cout << "Town" << endl;
        else cout << "Road" << endl;
    }
    return 0;
}
