#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int a, b;
    cin >> a >> b;

    if (a > 0 && b == 0) cout << "Gold" << endl;
    if (a == 0 && b > 0) cout << "Silver" << endl;
    if (0 < a && b > 0) cout << "Alloy" << endl;
    return 0;
}
