#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    string s;
    cin >> s;

    char c1 = s[0];
    if('a' <= c1 && c1 <= 'z') {
        cout << "No" << endl;
        return 0;
    }
    s.erase(0,1);
    rep(i,s.length()) {
        char c2 = s[i];
        if('A' <= c2 && c2 <= 'Z') {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
