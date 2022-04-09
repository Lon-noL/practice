#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main() {
    int A, B;
    cin >> A >> B;

    int sa = abs(A - B);

    int ans = 1;
    for(int i = 0; i < sa; i++) ans *= 32;
    cout << ans << endl;
    return 0;
}
