#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    string s, t;
    cin >> t;

    rep(i,2) s += t;

    int sizes = s.size();
    int sizet = t.size();
    string a;
    rep(j,sizet) a += s[j];
    for(int i = 1; i < sizet; i++) {
        string b;
        rep(k,sizet) b += s[i+k];
        a = min(a,b);
    }
    cout << a << endl;

    string d;
    rep(j,sizet) d += s[j];
    for(int i = 1; i < sizet; i++) {
        string b;
        rep(k,sizet) b += s[i+k];
        d = max(d,b);
    }
    cout << d << endl;
    return 0;
}
