#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n;
    cin >> n;
    map<string, int> mp;
    rep(i,n) {
        string s;
        cin >> s;
        mp[s]++;
    }
    int mx = 0;
    for(auto p : mp)    mx = max(mx, p.second);
    string ans;
    for(auto p : mp) if(p.second == mx) ans = p.first;
    cout << ans << endl;
    return 0;
}
