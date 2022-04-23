#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, k;
    cin >> n >> k;

    vector<string> s(n);
    rep(i,n) cin >> s[i];

    map<char, int> m;

    rep(i,n) {
        int s_size = s[i].size();
        for(int j = 0; j < s_size; j++) {
            m[s[i][j]] += 1;
        }
    }
    return 0;
}