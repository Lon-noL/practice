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
    ll n, x;
    cin >> n >> x;

    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    sort(a.begin(), a.end());

    int l = 0, r = n-1;
    while(l <= r) {
        int mid = (r + l) / 2;

        if(a[mid] == x) {
            cout << "Yes" << endl;
            return 0;
        }
        if(a[mid] > x)
            r = mid - 1;
        if(a[mid] < x)
            l = mid + 1;
    }

    cout << "No" << endl;
    return 0;
}
