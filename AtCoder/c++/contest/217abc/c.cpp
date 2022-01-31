#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int N;
    cin >> N;
    int p[200010], q[200010];
    rep(i,N) cin >> p[i];

    for (int i = 0; i < N; i++) {
        int x = p[i];
        q[x-1] = i+1;
    }
    rep(i,N) cout << q[i] << ' ';
    cout << endl;
    return 0;
}
