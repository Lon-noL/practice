#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int n;
vector<string> S(1010), T(1010);

int main(){
    cin >> n;
    rep(i,n) {
        cin >> S.at(i) >> T.at(i);
    }

    rep(i,n-1) {
        for (int j = i+1; j < n; j++) {
            if (S[i] == S[j] && T[i] == T[j]) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
