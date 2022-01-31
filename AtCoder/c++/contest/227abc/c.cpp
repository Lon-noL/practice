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
    int ans = 0;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            for(int k = 1; k <= j; k++) {
                if(i*j*k <= n) ans++;
                if(i*j*k > n) continue;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
