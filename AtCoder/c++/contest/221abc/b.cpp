#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main() {
    string S, T;
    cin >> S >> T;

    if(S == T) {
        cout << "Yes" << endl;
        return 0;
    }

    for(int i = 0; i < S.size(); i++) {
        if(S[i] != T[i]) {
            if(S[i] == T[i+1] && S[i+1] == T[i]) {
                cout << "Yes" << endl;
                return 0;
            }
            else if(S[i] == T[i-1] && S[i-1] == T[i]) {
                cout << "Yes" << endl;
                return 0;
            }
            else {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    return 0;
}
