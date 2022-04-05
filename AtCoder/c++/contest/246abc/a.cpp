#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
/*
int main() {
    int x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if(x1 == x2) {
        if(y1 == y3) {
            cout << x3 << ' ' << y2 << endl;
        }
        else {
            cout << x3 << ' ' << y1 << endl;
        }
    }
    else {
        if(y1 == y2) {
            if(x1 == x3) {
                cout << x2 << ' ' << y3 << endl;
            }
            else {
                cout << x1 << ' ' << y3 << endl;
            }
        }
        else {
            if(x1 == x3) {
                cout << x2 << ' ' << y1 << endl;
            }
            else {
                cout << x1 << ' ' << y2 << endl;
            }
        }
    }
    return 0;
}
*/
int main() {
    vector<int> x(3), y(3);
    cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2];
    cout << (x[0] ^ x[1] ^ x[2]) << " " << (y[0] ^ y[1] ^ y[2]) << endl;
    return 0;
}
