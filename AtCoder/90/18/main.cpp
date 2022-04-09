#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int Q;
long double T, L, X, Y, E;
long double PI = 3.14159265358979;

long double query(long double I) {
    long double cx = 0;
    long double cy = -(L / 2.0) * sin(I / T * 2.0 * PI);
    long double cz = (L / 2.0) - (L / 2.0) * cos(I / T * 2.0 * PI);
    long double d1 = sqrt((cx - X) * (cx - X) + (cy - Y) * (cy - Y));
    long double d2 = cz;
    long double kaku = atan2(d2, d1);
    return kaku * 180.0L / PI;
}

int main(){
    cin >> T;
    cin >> L >> X >> Y;
    cin >> Q;
    for (int i = 1; i <= Q; i++) {
        cin >> E;
        printf("%.12Lf\n", query(E));
    }
    return 0;
}
