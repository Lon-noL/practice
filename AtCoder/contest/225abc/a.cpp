#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    string s;
    cin >> s;
    int n = s.size();

    if(s[0] != s[1] && s[1] != s[2] && s[0] != s[2]) cout << '6' << endl;
    else if(s[0] == s[1] && s[0] == s[2]) cout << '1' << endl;
    else cout << '3' << endl;
    return 0;
}
