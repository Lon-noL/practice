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
    int n;
    cin >> n;
    int N = n+1;

    string s;
    cin >> s;

    int r = 0;

    vector<int> v(1,0);
    if(s[0] == 'R') {
        v.insert(v.begin()+1, 1);
    } else {
        v.insert(v.begin(), 1);
    }

    for(int i = 1; i < N; i++) {
            if(s[i] == 'R'){
                v.insert(v.begin()+r+1, i+1);
                r++;
            }
            if(s[i] == 'L'){
                v.insert(v.begin()+r, i+1);
            }
    }

    rep(i,N) cout << v[i] << ' ';
    cout << endl;
    return 0;
}
