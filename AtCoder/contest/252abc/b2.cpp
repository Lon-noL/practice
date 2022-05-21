#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    int max = 0;
    rep(i,n) {
        int x;
        cin >> x;
        if(max < x) max = x;
        a[i] = x;
    }

    rep(i,k) {
        int y;
        cin >> y;
        if(a[y - 1] == max) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
