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
    vector<int> s(n);
    bool zero = false;
    rep(i,n) {
        int x;
        cin >> x;
        if(x == 0) zero = true;
        s[i] = x;
    }

    if(zero) {
        cout << n << endl;
        return 0;
    }

    int res = 0;
    int right = 0;
    ll sum = 1;
    for(int left = 0; left < n; left++) {
        while(right < n && sum * s[right] <= k) {
            sum *= s[right];
            right++;
        }
        res = max(res, (right - left));

        if(right == left) right++;
        else sum /= s[left];
    }

    cout << res << endl;
    return 0;
}
