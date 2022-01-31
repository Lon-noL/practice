#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int n, k;
    vector<int> a, b;
    cin >> n >> k;
    a.resize(n); b.resize(n);
    rep(i,n) cin >> a.at(i);
    rep(i,n) cin >> b.at(i);

    int tot = 0;
    rep(i,n) {
        tot += abs(a.at(i)-b.at(i));
    }
    if (tot <= k){
        if (tot%2 == 0 && k%2 == 0){
            cout << "Yes" << endl;
            return 0;
        }
        else if (tot%2 == 1 && k%2 == 1){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
