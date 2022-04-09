#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n*2);
    for(int i = 0; i < n; i++) cin >> a.at(i);
    // 長さを二倍する
    double x = 0;
    for(int i = 0; i < n; i++) {
        a.at(i+n) = a.at(i);
        x += a.at(i);
    }
    x /= 10;
    int right = 0;
    ll sum = 0;
    bool ans = false;
    for (int left = 0; left < n*2; ++left){
        while (right < n*2 && sum + a[right] <= x){
            sum += a[right];
            right++;
        }
        if (sum == x) {
            ans = true;
            break;
        }
        if (right == left) right++;
        else sum = 0;
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
