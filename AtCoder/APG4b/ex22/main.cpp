#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;

    vector<pair<int, int>> pairs(n);
    rep(i,n){
        int a, b;
        cin >> a >> b;
        pairs.at(i) = make_pair(b, a);
    }

    sort (pairs.begin(), pairs.end());

    rep(i,n) cout << pairs.at(i).second << ' ' << pairs.at(i).first << endl;

    return 0;
}
