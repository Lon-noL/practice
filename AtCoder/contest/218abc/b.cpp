#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    vector<int> P(30);
    rep(i,26) {
        int x;
        cin >> x;
        P[i] = x + 96;
    }
    rep(i,26) cout << char(P[i]);
    cout << endl;
    return 0;
}
