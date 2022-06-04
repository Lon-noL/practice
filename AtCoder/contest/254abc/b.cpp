#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(30,1));
    if(n > 2){
        for(int i = 2; i < n; i++){
            int sz = i+1;
            for(int j = 0; j < sz-1; j++){
                if(j != 0 ){
                    v[i][j] = v[i-1][j-1] + v[i-1][j];
                }
            }
        }
    }

    rep(i,n){
        int size = i+1;
        rep(j,size){
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
