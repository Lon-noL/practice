#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    double n;
    cin >> n;
    int x, y;
    x = n / 1;
    y = n * 10 - x * 10 ;

    if (0 <= y && y <= 2) cout << x << '-' << endl;
    else if (3 <= y && y <= 6) cout << x << endl;
    else cout << x << '+' << endl;
    return 0;
}
