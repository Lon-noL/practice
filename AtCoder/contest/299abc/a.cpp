#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++) {
        if(s[i] == '|') {
            for(int j = i+1; j < n; j++) {
                if(s[j] == '*') {
                    cout << "in" << endl;
                    return 0;
                }
                else if(s[j] == '|') {
                    cout << "out" << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}
