#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int n;
string s[1 << 18];
map<string, int> Map;

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> s[i];
        if (Map[s[i]] == 0) {
            Map[s[i]] = 1;
            cout << i << endl;
        }
    }
    return 0;
}
