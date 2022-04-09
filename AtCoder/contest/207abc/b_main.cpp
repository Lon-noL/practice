#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll e = c*d-b;
    if (e <= 0) cout << -1 << endl;
    else {
        ll ans = (a+e-1)/e;
        cout << ans << endl;
    }
    return 0;
}



/*int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (c * d <= b){
        cout << -1 << endl;
        return 0;
    }


    for (int i = 1; i < 1000000; i++){
        if ((a + b * i) % (c * i) == 0 && (a + b * i) / (c * i) <= d){
            cout << i << endl;
            return 0;
        }
        if ((a + b * i) / (c * i) < d){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}*/
