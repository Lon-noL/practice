#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int h, w;
    cin >> h >> w;

    if (h == 1 || w == 1) cout << h*w << endl;
    else cout << ((h+1)/2)*((w+1)/2) << endl;
    return 0;
}
