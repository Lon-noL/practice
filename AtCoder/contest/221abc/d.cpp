#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<ll> A(N), B(N);
    rep(i,N) cin >> A[i] >> B[i];
    ll maxday = 0;

    vector<ll> sum(2000001001);
    for(int i = 0; i < N; i++) {
        ll a = A[i];
        ll b = A[i] + B[i];
        for(int j = a; j < b; j++) {
            sum[j]++;
            maxday = max(maxday, b -1);
        }
    }

    for(int i = 1; i <= maxday; i++) {
        int ans = 0;
        for(int j = 0; j < N; j++) {
            if(sum[j] == i) {
                ans++;
            }
        }
        cout << ans << ' ';
    }
    cout << endl;
    return 0;
}
