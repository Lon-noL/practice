#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    string s;
    cin >> s;

    int n = s.size();

    int front = 0;
    int back = 0;

    while(s[0] == 'a') {
        s.erase(0,1);
        front++;
    }
    while(s[n-1] == 'a') {
        s.erase(n-1,1);
        back++;
    }

    int m = s.size();

    if(m <= 1) {
        cout << "Yes" << endl;
        return 0;
    }


    if(front > back) {
        cout << "No" << endl;
        return 0;
    }

    string t = s;

    if(m%2 == 0) {
        m /= 2;
        s.erase(m);
        t.erase(0,m-1);
    } else {
        m /= 2;
        s.erase(m);
        t.erase(0,m);
    }

    t.reverse(t.begin(), t.end());

    if(s != t) {
        cout << "No" << endl;
        return 0;
    }


    cout << "Yes" << endl;
    return 0;
}
