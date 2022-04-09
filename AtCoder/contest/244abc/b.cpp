#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    string t;
    cin >> n >> t;

    P now(0,0);
    int ahead = 1;
    bool x = true;
    int cntr = 0;

    rep(i,n) {
        if(t[i] == 'S') {
            if(x) {
                now.first += ahead;
            }
            else {
                now.second += ahead;
            }
        }
        else {
            if(cntr % 4 == 0) {
                ahead = -1;
                cntr++;
                x = false;
            }
            else if(cntr % 4 == 1) {
                ahead = -1;
                cntr++;
                x = true;
            }
            else if(cntr % 4 == 2) {
                ahead = 1;
                cntr++;
                x = false;
            }
            else if(cntr % 4 == 3) {
                ahead = 1;
                cntr++;
                x = true;
            }
        }
    }
    cout << now.first << ' ' << now.second << endl;
    return 0;
}
