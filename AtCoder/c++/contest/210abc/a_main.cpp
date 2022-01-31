#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int n, a, x, y;
    cin >> n >> a >> x >> y;

    if (n <= a) cout << n*x << endl;
    else {
        cout << a*x + (n-a)*y << endl;
    }
    return 0;
}
