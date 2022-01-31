#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int a, b;
    cin >> a >> b;

    double ans = 0;
    ans = (double)((a)-b)/3 + b;
    // cout << fixed << setprecision(7);
    // cout << ans << endl;
    printf("%.10f\n", ans);
    return 0;
}
