#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    rep(i,n) cin >> v.at(i);

    map<int,int> cnt;
    for (int x : v){
        if (cnt.count(x)) cnt.at(x)++;
        else cnt[x] = 1;
    }

    int max_cnt = 0;
    int ans = 0;
    for (int x : v){
        if (max_cnt < cnt.at(x)){
            max_cnt = cnt.at(x);
            ans = x;
        }
    }

    cout << ans << " " << max_cnt << endl;
    return 0;
}
