#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int ans = 10000;
    int l = 9999;
    for ( int i = 0; i <= l; i++){
        if(i*a > n) break;
        for (int j = 0; j <= l; j++){
        if(j*b > n) break;
            if ((n - i*a - j*b) % c == 0){
                int k = (n - i*a - j*b) / c;
                if (k < 0) break;
                ans = min(ans, i+j+k);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
