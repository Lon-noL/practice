#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i,n) cin >> a.at(i);
    int sum = 0;
    rep(i,n){
        sum += a.at(i);
    }

    sum -= n/2;
    if (x >= sum) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
