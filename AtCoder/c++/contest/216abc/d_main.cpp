#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int N, M;
    cin >> N >> M;
    vector<vector<int>> a(M);
    vector<vector<int>> pos(N);

    rep(i,M) {
        int k;
        cin >> k;
        a[i] = vector<int>(k);
        rep(j,k) cin >> a[i][j];
        rep(j,k) {
            a[i][j]--;
            pos[a[i][j]].push_back(i);
        }
    }
    vector<int> cnt(N);
    queue<int> q;

    rep(i,M) {
        int t = a[i].back();
        cnt[t]++;
    }

    rep(i,N) if(cnt[i] == 2) q.push(i);
    int take = 0;

    while(q.size()) {
        int x = q.front(); q.pop();
        take++;
        rep(i,2) {
            int p = pos[x][i];
            a[p].pop_back();
            if(a[p].size()) {
                int t = a[p].back();
                cnt[t]++;
                if(cnt[t] == 2) q.push(t);
            }
        }
    }

    if(take == N) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
