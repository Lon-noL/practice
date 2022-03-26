#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
using P = pair<int,int>;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(a < c) {
        cout << "Takahashi" << endl;
        return 0;
    }
    if(a > c) {
        cout << "Aoki" << endl;
        return 0;
    }
    if(a == c) {
        if(b < d) {
            cout << "Takahashi" << endl;
            return 0;
        }
        if(b > d) {
            cout << "Aoki" << endl;
            return 0;
        }
        if(b == d) {
            cout << "Takahashi" << endl;
            return 0;
        }
    }
    return 0;
}
