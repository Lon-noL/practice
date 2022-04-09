#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    double x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    double bigr = max(r1, r2);
    double smallr = min(r1, r2);

    double dist = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));

    if((bigr - dist) > smallr) {
        cout << 1 << endl;
        return 0;
    }
    else if((bigr - dist) == smallr) {
        cout << 2 << endl;
        return 0;
    }
    else if(dist < (r1 + r2)){
        cout << 3 << endl;
        return 0;
    }
    else if(dist == (r1 + r2)) {
        cout << 4 << endl;
        return 0;
    }
    else {
        cout << 5 << endl;
        return 0;
    }
    return 0;
}
