#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, m;
    cin >> n >> m;
    // 行き先
    vector<vector<int>> to(n);
    // 入次数の管理
    vector<int> deg(n);
    rep(i,m) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        to[a].push_back(b);
        deg[b]++;
    }
    priority_queue<int, vector<int>, greater<int>> q;
    // 入次数０の点をqにいれる
    rep(i,n) if(deg[i] == 0) q.push(i);

    vector<int> ans;

    while(q.size()) {
        int v = q.top(); q.pop();
        ans.push_back(v);

        for(int u : to[v]) {
            deg[u]--;
            if(deg[u] == 0) q.push(u);
        }
    }

    if(ans.size() != n) cout << -1 << endl;
    else {
        for(int v : ans) cout << v+1 << endl;
    }

    return 0;
}
