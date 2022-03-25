#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;

    set<int> se;
    for(int i = 1; i <= 2*n+1; i++) se.insert(i);
    while(se.size()) {
        int a = *se.begin();
        cout << a << endl;
        se.erase(a);
        int x;
        cin >> x;
        se.erase(x);
    }

    return 0;
}
