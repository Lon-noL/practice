#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
using P = pair<int, int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int N, M;
    cin >> N >> M;
    int n = N * 2;
    vector<vector<char>> A(n, vector<char>(M));
    rep(i,n) rep(j,M) cin >> A[i][j];

    vector<pair<int,int>> ans(n);
    rep(i,n) ans[i] = make_pair(0,i);

    for(int round = 0; round < M; round++) {
        for(int i = 0; i < n; i+=2) {
            int p1 = ans[i].second;
            int p2 = ans[i+1].second;
            if(A[p1][round] == 'G' && A[p2][round] == 'C') ans[i].first++;
            if(A[p1][round] == 'G' && A[p2][round] == 'P') ans[i+1].first++;
            if(A[p1][round] == 'C' && A[p2][round] == 'P') ans[i].first++;
            if(A[p1][round] == 'C' && A[p2][round] == 'G') ans[i+1].first++;
            if(A[p1][round] == 'P' && A[p2][round] == 'G') ans[i].first++;
            if(A[p1][round] == 'P' && A[p2][round] == 'C') ans[i+1].first++;
        }
        sort(ans.begin(),ans.end());
    }

    rep(i,n) cout << ans[i].second + 1 << endl;
    return 0;
}

/*

bool win(char a, char b) {
    if(a == 'G' && b == 'C') return true;
    if(a == 'C' && b == 'P') return true;
    if(a == 'P' && b == 'G') return true;
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    int n2 = n*2;
    vector<string> a(n2);
    rep(i,n2) cin >> a[i];
    vector<P> d(n2);
    rep(i,n2) d[i] = P(0,i);
    rep(mi,m) {
        rep(ni,n) {
            int i = ni * 2, j = ni * 2 + 1;
            int ai = d[i].second, aj = d[j].second;
            if(win(a[ai][mi],a[aj][mi])) d[i].first--;
            if(win(a[aj][mi],a[ai][mi])) d[j].first--;
        }
        sort(d.begin(), d.end());
    }
    rep(i,n2) cout << d[i].second+1 << endl;
    return 0;
}*/
