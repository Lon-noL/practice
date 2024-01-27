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

    map<char, int> m;
    rep(i,s.length()) {
        if(m.count(s[i])) m[s[i]] += 1;
        else m[s[i]] = 1;
    }

    int max = -1;
    char ans;
    for(auto p : m) {
        auto key = p.first;
        auto value = p.second;

        if(max < value) {
            max = value;
            ans = key;
        }
    }
    cout << ans << endl;
    return 0;
}
