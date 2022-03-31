#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

const double PI = 3.14159265358979;

int main() {
    double A, B, H, M;
    cin >> A >> B >> H >> M;

    double AngleH = 30.0 * H + 0.5 * M;
    double AngleM = 6.0 * M;
    double Hx = A * cos(AngleH * PI / 180.0), Hy = A * sin(AngleH * PI / 180.0);
    double Mx = B * cos(AngleM * PI / 180.0), My = B * sin(AngleM * PI / 180.0);

    double d = sqrt((Hx - Mx) * (Hx - Mx) + (Hy - My) * (Hy - My));
    printf("%.12lf\n", d);
    	return 0;
}
