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
    vector<vector<int>> ao(n+1,vector<int>(n)), taka(n+1, vector<int>(n));
    rep(i,m) {
        int x, y;
        cin >> x >> y;

        taka[x].push_back(y);
        taka[y].push_back(x);
    }
    rep(i,m) {
        int x, y;
        cin >> x >> y;

        ao[x].push_back(y);
        ao[y].push_back(x);
    }

    vector<int> ao_check(n+1), taka_check(n+1);
    rep(i,n+1) {
        int a = taka[i].size();
        taka_check[a]++;
    }
    rep(i,n+1) {
        int a = ao[i].size();
        ao_check[a]++;
    }

    if(taka_check == ao_check) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}
