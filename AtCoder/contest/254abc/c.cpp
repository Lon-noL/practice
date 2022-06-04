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
    vector<int> a(n+1), A(n+1), dif(n+1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        A[i] = a[i];
    }
    int mx = n - k;
    sort(A.begin(), A.end());
    for(int i = 1; i <= n; i++){
        if(a[i] != A[i]) dif[i]++;
    }
    for(int i = 1; i <= n; i++){

    }



    if(a == A) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
