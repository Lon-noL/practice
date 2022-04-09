#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

ll N;
ll X, Asum = 0;

int main() {
    cin >> N;
    vector<ll> A(N);
    rep(i,N) {
        int y; cin >> y;
        Asum += y;
        A[i] = Asum;
    }
    cin >> X;

    ll ans = X / Asum * N;
    ll res = X % Asum;
/*
    auto itr = upper_bound(A.begin(), A.end(), res);
    ll basho = itr - A.begin();

    cout << ans + basho + 1 << endl;
    */

   for(int i = 0; i < N; i++) {
       if(res < A[i]) {
           cout << ans + i + 1 << endl;
           return 0;
       }
   }
    return 0;
}
