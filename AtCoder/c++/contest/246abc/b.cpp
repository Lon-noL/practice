#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int x,y;
    cin >> x >> y;

    int d2 = x * x + y * y;
    double d = d2;
    d = sqrt(d);
    double dx = x, dy = y;
    cout << dx / d << ' ' << dy / d << '\n';

    return 0;
}
