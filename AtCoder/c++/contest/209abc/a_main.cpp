#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int a, b;
    cin >> a >> b;

    if (a >= b){
        cout << 0 << endl;
        return 0;
    }
    cout << b-a+1 << endl;
    return 0;
}
