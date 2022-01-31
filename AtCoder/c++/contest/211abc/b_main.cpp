#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    vector<string> s(4);
    rep(i,4) cin >> s.at(i);

    int is = 0;
    rep(i,4) {
        if (s.at(i) == "H") is += 1;
        if (s.at(i) == "HR") is += 3;
        if (s.at(i) == "2B") is += 7;
        if (s.at(i) == "3B") is += 10;
    }
    if (is == 21) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
