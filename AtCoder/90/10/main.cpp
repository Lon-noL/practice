#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> cp1(n+1);
    vector<int> cp2(n+1);
        int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= n; i++){
        int x, y;
        cin >> x >> y;
        if (x == 1){
            sum1 += y;
            cp1.at(i) = sum1;
            cp2.at(i) = sum2;
        }
        if (x == 2){
            sum2 += y;
            cp1.at(i) = sum1;
            cp2.at(i) = sum2;
        }
    }

    int q;
    cin >> q;
    rep(i,q){
        int l, r;
        cin >> l >> r;

        cout << cp1.at(r) - cp1.at(l-1) << ' ' << cp2.at(r) - cp2.at(l-1) << endl;
    }
    return 0;
}
