#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    ll N;
    string S;
    cin >> N;

    if (N == 1) {
        cout << 'A' << endl;
        return 0;
    }
    while (N > 1) {
        if (N % 2 == 0) {
            N /= 2;
            S.push_back('B');
        }
        else {
            N -= 1;
            S.push_back('A');
        }
    }
    S.push_back('A');
    reverse(S.begin(), S.end());
    cout << S << endl;
    return 0;
}
