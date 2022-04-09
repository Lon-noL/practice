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
    set<vector<int>> s;

    rep(i,n) {
        int l;
        cin >> l;
        vector<int> a(l);
        rep(j,l) cin >> a[j];
        s.insert(a);
    }

    cout << s.size() << endl;
    return 0;
}
