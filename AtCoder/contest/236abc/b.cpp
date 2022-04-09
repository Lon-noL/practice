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
	int N = 4*n;

    vector<int> v(n+1);
    rep(i,N-1) {
        int a;
        cin >> a;
        v[a] += 1;
    }

    rep(i,n+1) {
         if(v[i] == 3) cout << i << endl;
    }
    return 0;
}
