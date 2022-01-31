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
    vector<int> deg(n);
    rep(i,n-1) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        deg[a]++; deg[b]++;
    }
/*    vector<int> a(n-1), b(n-1);
    rep(i,n-1) cin >> a[i] >> b[i];

    vector<int> ten(n+1);
    rep(i,n-1) {
        ten[a[i]]++;
        ten[b[i]]++;
    }
*/
    rep(i,n+1) {
        if(deg[i] == n-1) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
