#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    vector<string> S(4), s(3);
    S[0] = "ABC";
    S[1] = "ARC";
    S[2] = "AGC";
    S[3] = "AHC";

    rep(i,3) cin >> s[i];


    rep(i,4) {
        int flag = 0;
        rep(j,3) {
            if (s[j] == S[i]) {
                flag = 1;
            }
        }
        if (!(flag)) {
            cout << S[i] << endl;
            return 0;
        }
    }
    return 0;
}
