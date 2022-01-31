#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int n, p, q;
    cin >> n >> p >> q;
    vector<int> a(n);
    rep(i,n) cin >> a.at(i);

    int ans = 0;
    for (int i = 0; i < n-4; i++){
        for (int j = i+1; j < n-3; j++){
            for (int k = j+1; k < n-2; k++){
                for (int l = k+1; l < n-1; l++){
                    for (int m = l+1; m < n; m++){
                        if (1LL*a[i] * a[j]%p * a[k]%p * a[l]%p * a[m]%p == q)
                            ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
