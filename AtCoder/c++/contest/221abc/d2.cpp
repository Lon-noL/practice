#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<ll> A(N), B(N);
    ll max_day = 0;
    ll mini = 1001001001;
    rep(i,N) {
        ll b;
        cin >> A[i] >> b;
        B[i] = A[i] + b - 1;
        mini = min(mini, A[i]);
        max_day = max(max_day, B[i]);
    }
    for(int i = 0; i < N; i++) {
        A[i] -= (mini - 1);
        B[i] -= (mini - 1);
    }

    vector<int> sum(max_day + 1);
    for(ll i = 1; i <= max_day; i++) {
        for(int j = 0; j < N; j++) {
            if(i >= A[j] && i <= B[j]) {
                sum[i]++;
            }
        }
    }
    for(int i = 1; i <= N; i++) {
        ll ans = 0;
        for(ll j = 1; j <= max_day; j++) {
            if(sum[j] == i) ans++;
        }
        cout << ans << ' ';
    }
    cout << endl;
    return 0;
}
