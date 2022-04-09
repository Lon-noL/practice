#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int admin = 100;

    for (int i = 0; i < N; i++){
        int A;
        cin >> A;

        int d = 0;
        while (A % 2 == 0){
            A /= 2;
            ++d;
        }
        if (admin > d)
            admin = d;
    }
    cout << admin << endl;
}

// 自作Ver.
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a.at(i);

    int ans = 30;
    for (int i = 0; i < n; i++){
        int count = 0;
        while (a.at(i) > 0 && a.at(i) % 2 == 0){
            a.at(i) /= 2;
            count++;
        }
        ans = min(ans, count);
    }
    cout << ans << endl;
    return 0;
}
