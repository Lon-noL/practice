#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    for(int i = 0; i < k; i++){
        vector<int> b;
        for(int j = i; j < n; j += k){
            b.push_back(a[j]);
        }
        sort(b.begin(), b.end());
        for(int j = i; j < n; j += k){
            a[j] = b[j /k];
        }
    }
    bool ok = true;
    for(int i = 1; i < n; i++){
        if(a[i] < a[i-1]) ok = false;
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
