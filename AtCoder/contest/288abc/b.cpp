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
    vector<int> s(k);
    rep(i,k) cin >> s[i];

    sort(s[0],s[k-1]);
    rep(i,k) cout << s[i] << endl;
    return 0;
}
