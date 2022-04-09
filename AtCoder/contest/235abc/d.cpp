#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int a, n;
    cin >> a >> n;

    const int MX = 1000000;
    const int INF = 1001001001;

    vector<int> dist(MX, INF);
    queue<int> q;
// queueにいれる関数
    auto push = [&](int v, int d) {
        if(dist[v] != INF) return;
        dist[v] = d;
        q.push(v);
    };

    push(1,0);

    while(!q.empty()) {
        int v = q.front(); q.pop();
        int d = dist[v];

        if(ll(v)*a < MX) push(v*a,d+1);

        if(v >= 10 && v%10 != 0) {
            string s = to_string(v);
            int len = s.size();

            rotate(s.begin(), s.begin()+(len-1), s.end());

            int u = stoi(s);
            push(u,d+1);
        }
    }

    if(dist[n] == INF) cout << -1 << endl;
    else cout << dist[n] << endl;
    return 0;
}
