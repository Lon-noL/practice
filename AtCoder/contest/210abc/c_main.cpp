#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    rep(i,n) cin >> c.at(i);

    int ans = 0;
    map<int, int> m;
    int now = 0;
    rep(i,n){
        if (m[c.at(i)] == 0) now++;//存在しないkeyでも０初期化した状態で扱われる
        m[c.at(i)]++;
        if (i >= k) {
            m[c.at(i-k)]--;
            if (m[c.at(i-k)] == 0) now--;//もしm.at(c.at(i))で呼び出すと存在しないkeyの場合エラー
        }
        ans = max(ans, now);
    }
    cout << ans << endl;
    return 0;
}
