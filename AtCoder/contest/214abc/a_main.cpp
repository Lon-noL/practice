#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int n;
    cin >> n;

    if (n <= 125) cout << 4 << endl;
    if (n >= 126 && n <= 211) cout << 6 << endl;
    if (n >= 212) cout << 8 << endl;
    return 0;
}
