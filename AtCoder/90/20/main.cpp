#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    ll a, d = 1;
    int b, c;
    cin >> a >> b >> c;

    for (int i = 0; i < b; i++) d *= c;
    if (a < d)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
