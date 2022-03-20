#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;

    int N = 2*n + 1;
    vector<bool> ans(N, true);
    ans[0] = false;
    ans[1] = false;

    cout << 1 << flush;

    int takahashi = 2;
    rep(i,n+1) {
        int aoki;
        cin >> aoki;
        if(aoki == 0) return 0;
        else {
            ans[aoki] = false;
            for(int j = takahashi; j <= N; j++) {
                if(ans[j]) {
                    ans[j] = false;
                    cout << j << flush;
                    takahashi = j;
                    break;
                }
            }
        }
    }

    return 0;
}
