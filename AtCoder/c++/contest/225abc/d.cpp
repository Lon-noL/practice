#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, q;
    cin >> n >> q;
// 双方向リスト
    vector<int> front(n, -1);
    vector<int> back(n, -1);

    rep(qi,q) {
        int type;
        cin >> type;
        if(type == 3) {
            int x;
            cin >> x; --x;
// xを連結部分の銭湯まで持ってくる
            while(front[x] != -1) x = front[x];
            vector<int> ans = {x+1};
            while(back[x] != -1) {
                x = back[x];
                ans.push_back(x+1);
            }
            cout << ans.size() << ' ';
            for(int i = 0; i < ans.size(); i++) cout << ans[i] << ' ';
            cout << endl;
        } else {
            int x, y;
            cin >> x >> y; --x; --y;
            if(type == 1) {
                back[x] = y;
                front[y] = x;
            } else {
                back[x] = -1;
                front[y] = -1;
            }
        }
    }
    return 0;
}
