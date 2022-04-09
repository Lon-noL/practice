#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;


int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    vector<int, int> vec(n*2);
    for(int i = 1; i <= n; i++) {
        cin >> a.at(i) >> b.at(i);
        vec.push_back(b.at(i));
        vec.push_back(a.at(i) - b.at(i));
    }

    sort(vec.begin(), vec.end());
    ll ans = 0;
    reverse(vec.begin(), vec.end());
    for(int i = 0; i < k; i++){
        ans += vec.at(i);
    }
    cout << ans << endl;
    return 0;
}
