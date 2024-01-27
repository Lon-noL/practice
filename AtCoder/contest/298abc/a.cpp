#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool flag = false;
    rep(i,n) {
        if(s[i] == 'x') {
            flag = false;
            break;
        }
        else if(s[i] == 'o') {
            flag = true;
        }
    }
    if(flag) {
        cout << "Yes" << endl;
        return 0;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}
