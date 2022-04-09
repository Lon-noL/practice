#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main() {
    int X;
    cin >> X;

    if(X < 40) cout << 40 - X << endl;
    else if (X < 70) cout << 70 - X << endl;
    else if (X < 90) cout << 90 - X << endl;
    else cout << "expert" << endl;
    return 0;
}
