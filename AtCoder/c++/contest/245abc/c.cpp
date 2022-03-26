#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
using P = pair<int,int>;
int n, k;

int judge(int a, int x) {
    if(abs(a - x) <= k) return 1;
    return 0;
}

int main() {
    cin >> n >> k;
    vector<int> a(n), b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];

    vector<int> memo(n);
    int A = 0, B = 0;
    for(int i = 0; i < n; i++) {
        if(A < 2) {
            if(judge(a[i],a[i+1])) {
                memo[i-1] = 1;
                A = 0;
            }
            else A += 1;
            if(judge(a[i],b[i+1])) {
                memo[i-1] = 1;
                B = 0;
            }
            else B += 1;
        }
        if(B < 2) {
            if(judge(b[i],a[i+1])) memo[i-1] = 1;
            else A += 1;
            if(judge(b[i],b[i+1])) memo[i-1] = 1;
            else B += 1;
        }
    }

    rep(i,n) {
        if(!memo[i]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
