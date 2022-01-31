#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
// 前計算
int main(){
    int  h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w)), b(h, vector<int>(w));
    vector<int> col(w), row(h);
    rep(i,h) rep(j,w) cin >> a.at(i).at(j);

    rep(i,h){
        int sum = 0;
        rep(j,w){
            sum += a.at(i).at(j);
        }
        row.at(i) = sum;// あらかじめ値をメモしておくとtime out を防げる
    }
    rep(i,w){
        int sum = 0;
        rep(j,h){
            sum += a.at(j).at(i);
        }
        col.at(i) = sum;
    }
    rep(i,h){
        rep(j,w){
            b.at(i).at(j) = row.at(i) + col.at(j) - a.at(i).at(j);
            cout << b.at(i).at(j) ;
            if (j != w-1)
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}
