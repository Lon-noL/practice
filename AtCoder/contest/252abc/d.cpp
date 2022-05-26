#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

ll c(int x) {
    ll up = 1;
    for(int i = 3; i > 0; i--){
        up *= x;
        x--;
    }
    ll ans = up / 6;
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int,int> mp;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(mp.count(x)){
            mp[x]++;
        }
        else{
            mp[x] = 1;
        }
        a[i] = x;
    }
    int cnt = n - mp.size();

    return 0;
}
