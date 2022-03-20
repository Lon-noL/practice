#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
using P = pair<int,int>;

int main() {
    char s0, s1, s2;
    char t0, t1, t2;
    cin >> s0 >> s1 >> s2;
    cin >> t0 >> t1 >> t2;

    if(s0 == t0 && s1 == t1 && s2 == t2) cout << "Yes" << endl;
    else if(s0 != t0 && s1 != t1 && s2 != t2) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
