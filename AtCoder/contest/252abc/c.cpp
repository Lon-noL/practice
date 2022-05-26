#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;

    vector<string> s(n);
    rep(i,n) cin >> s[i];

    vector<int> reel(10);
    rep(i,10) {
        int now = s[0][i] - '0';
        int stop = i;
        vector<int> dup(10);
        set<int> bingo;
        bingo.insert(i);
        for(int j = 1; j < n; j++) {
            rep(k,10) {
                if(s[j][k] - '0' == now) {
                    stop = max(stop, k);
                    if(bingo.count(k)) {
                        dup[k]++;
                        stop = max(stop, k + dup[k] * 10);
                    }
                    bingo.insert(k);
                    break;
                }
            }
        }
        reel[now] = stop;
    }

    int ans = 1001001001;
    rep(i,10) {
        ans = min(ans,reel[i]);
    }

    cout << ans << endl;
    return 0;
}
