#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> A;
    for (int i = 1; i < n+1; i++) {
        int x;
        cin >> x;
        A[x] = i;
        a[i-1] = x;
    }
    sort(a.begin(), a.end());
    int bb = a[n-2];

    cout << A[bb] << endl;
    return 0;
}
