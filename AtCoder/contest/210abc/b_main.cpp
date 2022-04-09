#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int n;
    string s;
    cin >> n >> s;
    rep(i,n){
        if (s.at(i) == '1'){
            if (i%2 == 0) cout << "Takagashi" << endl;
            else cout << "Aoki" << endl;
            return 0;
        }
    }
}
