#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int p;
    cin >> p;

    int ans = 0;
    if (p >= 3628800){
        ans += p/3628800;
        p = p % 3628800;
    }
    if (p >= 362880){
        ans += p/362880;
        p = p % 362880;
    }
    if (p >= 40320){
        ans += p/40320;
        p = p % 40320;
    }
    if (p >= 5040){
        ans += p/5040;
        p = p % 5040;
    }
    if (p >= 720){
        ans += p/720;
        p = p % 720;
    }
    if (p >= 120){
        ans += p/120;
        p = p % 120;
    }
    if (p >= 24){
        ans += p/24;
        p = p % 24;
    }
    if (p >= 6){
        ans += p/6;
        p = p % 6;
    }
    if (p >= 2){
        ans += p/2;
        p = p % 2;
    }
    if (p >= 1){
        ans += p/1;
    }
    cout << ans << endl;
    return 0;
}
