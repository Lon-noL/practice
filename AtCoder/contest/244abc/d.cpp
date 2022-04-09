#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
using P = pair<int,int>;

string input() {
    string res;
    for(int i = 0; i < 3; i++) {
        char c;
        cin >> c;
        if(c == 'R') res += '0';
        if(c == 'G') res += '1';
        if(c == 'B') res += '2';
    }
    return res;
}

int color(string s) {
    if(s == "012") return 0;
    if(s == "201") return 0;
    if(s == "120") return 0;
    return 1;
}

int main() {
    string s = input();
    string t = input();
    if(color(s) == color(t)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
