#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int n;
    cin >>n;
    vector<int> s(n), t(n);
    rep(i,n) cin >> s.at(i);
    rep(i,n) cin >> t.at(i);

    vector<int> v(n);
    v.at(0) = t.at(0);
    for (int i = 0; i < n-1; i++) {
        int x = s[i] + v[i];
        v.at(i+1) = min(x, t[i+1]);
    }
    if (v.at(0) > v.at(n-1) + s.at(n-1)) {
        v.at(0) = v.at(n-1) + s.at(n-1);
        for (int i = 0; i < n-1; i++) {
            int x = s[i] + v[i];
            int y = min(x, t[i+1]);
            if (v[i+1] < y) break;
            else v[i+1] = y;
        }
    }
    rep(i,n) cout << v.at(i) << endl;
    return 0;
}
