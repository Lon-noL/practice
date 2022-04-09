#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

bool isprime(ll n) {
    for(ll i = 2; i*i <= n; i++) if(n % i == 0) return false;
    return true;
}

int main() {
    int a, b, c,  d;
    cin >> a >> b >> c >> d;

    vector<int> v(100);
    int cnt = 0;

    for(int i = a; i <= b+d; i++) {
        if(isprime(i)) {
            v[cnt] = i;
            cnt++;
        }
    }

    int dif = 0;
    rrep(i,cnt-1,1) {
        dif = max(dif, v[i]-v[i-1]);
    }

    if(dif > d-c+1) cout << "Takahashi" << endl;
    else cout << "Aoki" << endl;
    return 0;
}
