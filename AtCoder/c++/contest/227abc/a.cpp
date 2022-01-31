#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, k, a;
    cin >> n >> k >> a;

    if(n >= k + a - 1) {
        cout << k+a-1 << endl;
        return 0;
    }
    k -= (n - a + 1);
    k %= n;

    if(k == 0) {
        cout << n << endl;
        return 0;
    }
    cout << k << endl;
    return 0;
}
