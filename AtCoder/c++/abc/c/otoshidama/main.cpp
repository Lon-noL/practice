#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int n, Y;
    cin >> n >> Y;
    int x = 0, y = 0, z = 0;

    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= n-i; j++){
            for (int k = 0; k <= n-i-j; k++){
                if (1000*i + 5000*j + 10000*k == Y && i+j+k == n){
                    cout << k << " " << j << " " << i << endl;
                    return 0;
                }
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
    return 0;
}
