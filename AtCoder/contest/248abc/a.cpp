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
    vector<bool> v(10);

    for(int i = 0; i < 9; i++) {
        int x = (int)s[i] - '0';
        v[x] = true;
    }

    for(int i = 0; i < 10; i++) {
        if(!v[i]) {
            cout << i << endl;
        }
    }

    return 0;
}
