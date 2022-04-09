#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    string N;
    cin >> N;

    int size = N.size();

    if(size < 4) {
        if(size < 3) {
            if(size < 2) {
                cout << 0;
            }
            cout << 0;
        }
        cout << 0;
    }
    cout << N << endl;
    return 0;
}

/*
int main() {
    int n;
    cin >> n;
    printf("%04d\n", n);
    return 0;
}
*/
