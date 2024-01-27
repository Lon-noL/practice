#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;

    int left = 1, right = n;
    while(left + 1 < right) {
        int mid = (left + right) / 2;
        cout << "? " << mid << endl;
        int s;
        cin >> s;
        if(s == 1) right = mid;
        else left = mid;
    }
    cout << "! " << left << endl;
    return 0;
}
