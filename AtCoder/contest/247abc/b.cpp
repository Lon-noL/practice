#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<string,string>;

int main() {
    int n;
    cin >> n;

    vector<string> s(n), t(n);
    rep(i,n) cin >> s[i] >> t[i];

    vector<bool> sa(n, true), ta(n, true);

    rep(i,n) {
        rep(j,n) {
            if(i == j) continue;
            if(s[i] == s[j]) sa[i] = sa[j] = false;
            if(s[i] == t[j]) sa[i] = ta[j] = false;
            if(t[i] == t[j]) ta[i] = ta[j] = false;
        }
    }

    rep(i,n) {
        if(!sa[i] && !ta[i]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
