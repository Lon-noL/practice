#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    ll n;
    cin >> n;

    int count = 0;
    for (ll i = 2; i*i <= n; i++) {
        while (n % i == 0) {
            n /= i;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
