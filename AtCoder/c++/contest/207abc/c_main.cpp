#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;

    vector<int> l(n), r(n);
    rep(i, n){
        int t;
        cin >> t >> l[i] >> r[i];
        l[i] *= 2;
        r[i] *= 2;
        if (t >= 3) l[i]++;
        if (t%2 == 0) r[i]--;
    }

    int ans;
    rep(i,n)rep(j,i) {
        //交差するケースは２パターン一部重なる時、一つがもう一つの中にある時
        //重ならないケースは１パターンしかないのでそっちを見つけて、それ以外ならansを加算していく
        if (r[i] < l[j]) continue;
        if (r[j] < l[i]) continue;
        ++ans;
    }

    cout << ans << endl;
    return 0;
}
