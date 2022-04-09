#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int h, w, n;
    cin >> h >> w >> n;
    vector<pair<int, int>> a(n), b(n);
    rep(i,n) {
        int x, y;
        cin >> x >> y;
        a[i] = make_pair(x, i+1);
        b[i] = make_pair(y, i+1);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> A(n+1), B(n+1);
    rep(i,n) {
        A[a.at(i).second] = i+1;
        B[b.at(i).second] = i+1;
    }

    for (int i = 1; i < n+1; i++) {
        cout << A[i] << ' ' << B[i] << endl;
    }
    return 0;
}
