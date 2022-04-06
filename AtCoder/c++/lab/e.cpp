#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
int cnt;

int solve(int n) {
    vector<int> v(10);
    int i = 0;

    if(n < 10) return cnt;

    while(n > 9) {
        v[i] = n % 10;
        n /= 10;
        i++;
    }
    v[i] = n;
    int sum = 1;
    for(int j = 0; j <= i; j++) {
        sum *= v[j];
    }
    solve(sum);
    cnt++;
    return cnt;
}

int main() {
    int ans = 0;
    for(int i = 11; i <= 1000000; i++) {
        cnt = 0;
        if(solve(i) == 5) ans++;
    }
    //ans = solve(77);
    cout << ans << endl;
    return 0;
}
