#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = -1;
    int cnt = 0;
    for(int i = 0; i < n-1; i++) {
        if(s[i] == '-') {
            for(int j = i+1; j < n; j++) {
                if(s[j] == 'o') {
                    cnt++;
                }
                else {
                    if(cnt > ans) {
                        ans = cnt;
                        cnt = 0;
                    }
                    i = j - 1;
                    break;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
