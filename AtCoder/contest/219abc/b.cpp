#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main() {
    vector<string> S(3);
    string T;
    rep(i,3) cin >> S[i];
    cin >> T;

    string ans;
    for(char c : T)  {
        ans += S[c - '1'];
    }
    cout << ans << endl;
    return 0;
}
