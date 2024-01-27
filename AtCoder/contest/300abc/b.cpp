#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> a(h), b(h);
    rep(i,h) cin >> a[i];
    rep(i,h) cin >> b[i];
    map<int, int> cola, colb, rowa, rowb;

    for(int i = 0; i < h; i++) {
        int cnt = 0;
        for(int j = 0; j < w; j++) {
            if(a[i][j] == '#') {
                cnt++;
            }
        }
        cola[cnt]++;
    }
    for(int i = 0; i < w; i++) {
        int cnt = 0;
        for(int j = 0; j < h; j++) {
            if(a[j][i] == '#') {
                cnt++;
            }
        }
        rowa[cnt]++;
    }

    for(int i = 0; i < h; i++) {
        int cnt = 0;
        for(int j = 0; j < w; j++) {
            if(b[i][j] == '#') {
                cnt++;
            }
        }
        colb[cnt]++;
    }
    for(int i = 0; i < w; i++) {
        int cnt = 0;
        for(int j = 0; j < h; j++) {
            if(b[j][i] == '#') {
                cnt++;
            }
        }
        rowb[cnt]++;
    }

    bool flag = true;
    if(cola != colb) flag = false;
    if(rowa != rowb) flag = false;

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
