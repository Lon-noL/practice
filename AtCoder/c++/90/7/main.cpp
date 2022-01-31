#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
// 二分探索
int main(){
    int n, q;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a.at(i);
    cin >> q;
    vector<int> b(q);
    rep(i,q) cin >> b.at(i);

    sort(a.begin(), a.end());

    rep(i,q){
        int ans1 = 0, ans2 = 0;
        auto itr = lower_bound(a.begin(), a.end(), b.at(i));
        ans1 = b.at(i) - *itr;
        if (ans1 < 0) ans1 *= -1;
        if (itr != a.begin()){
            ans2 = b.at(i) - *(itr-1);
            if (ans2 < 0) ans2 *= -1;
            ans1 = min(ans1, ans2);
        }
        cout << ans1 << endl;
    }
    return 0;
}
