#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
/*
int main() {
    int K;
    string A, B;
    cin >> K >> A >> B;

    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    int a = A.size(), b = B.size();
    ll tenA = A[0] - 48, tenB = B[0] - 48;

    ll base = K;
    for(int i = 1; i < a; i++) {
        tenA += (A[i] - 48)* base;
        base *= K;
    }

    base = K;
    for(int i = 1; i < b; i++) {
        tenB += (B[i] - 48)* base;
        base *= K;
    }
    cout << tenA * tenB << endl;
    return 0;
}
*/
ll f(string S, int K) {
    ll ans = 0;
    for(char x : S) {
        ans *= K;
        ans += x - '0';
    }
    return ans;
}
int main() {
    int K;
    string A, B;
    cin >> K >> A >> B;

    ll a = f(A, K);
    ll b = f(B, K);

    cout << a * b << endl;
}
