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
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    const int di[] = {0, 1, 1, -1};
    const int dj[] = {1, 0, 1, 1};

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int v = 0; v < 4; v++) {
                int ni = i, nj = j;
                int whitecnt = 0;

                for(int k = 0; k < 6; k++) {
                    if(ni < 0 || nj < 0 || ni >= n || nj >= n) {
                        whitecnt = 999;
                        break;
                    }

                    if(s[ni][nj] == '.') whitecnt++;
                    ni += di[v]; nj += dj[v];
                }

                if(whitecnt <= 2) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
