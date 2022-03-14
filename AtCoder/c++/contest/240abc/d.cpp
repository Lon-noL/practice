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

    vector<int> a(n);
    rep(i,n) cin >> a[i];

    int box = 0, now = a[0], cnt = 0, back = 0;
    rep(i,n) {
        if(now != a[i]) cnt = 0;
        box++; cnt++; now = a[i];
        if(now == cnt) {
            box -= cnt;
            back += cnt;
            now = a[i-back];
            cnt = 1;
        }
        cout << box << endl;
    }
    return 0;
