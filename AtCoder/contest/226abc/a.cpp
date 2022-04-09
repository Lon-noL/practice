#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    double x;
    cin >> x;

    cout << round(x) << endl;
    return 0;
}

/*
int mani() {
    int a, b;
    scanf("%d.%d", &a, &b);
    if(b/100 >= 5) a++;
    cout << a << endl;
    return 0;
}
*/
