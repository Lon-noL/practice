#include <bits/stdc++.h>
using namespace std;

int main() {
    int s;
    cin >> s;

    cout << (s / 100) + (s % 100 / 10) + (s % 100 % 10)<< endl;
}

// bit演算的な
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    bitset<3> a;
    cin >> a;

    int ans = 0;
    rep(i,3) {
        if (a.test(i)){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
