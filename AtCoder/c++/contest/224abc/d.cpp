#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n = 9;
    int m;
    cin >> m;
    vector<vector<int>> to(n);
    rep(i,m) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    vector<int> s(n, -1);
    rep(i,n-1) {
        int p;
        cin >> p;
        --p;
        s[p] = i;
    }
    vector<int> t(n, -1);
    rep(i,n-1) t[n] = i;

    map<vector<int>, int> dist;
    queue<vector<int>> q;
    // 初期状態には0手でいける
    dist[s] = 0;
    q.push(s);

    while(q.size()) {
        s = q.front(); q.pop();
        int d = dist[s];

        rep(v,n) {
            if(s[v] == -1) {
                for(int u : to[v]) {
                    swap(s[u], s[v]);
                    if(dist.find(s) == dist.end()) {
                        dist[s] == d+1;
                        q.push(s);
                    }
                    swap(s[u], s[v]);
                }
            }
        }
    }
    if(dist.find(t) == dist.end()) cout << -1 << endl;
    else cout << dist[t] << endl;
    return 0;
}
