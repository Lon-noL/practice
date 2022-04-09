#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i,n) cin >> a[i];

// 平均値
    double ave = 0;
    int cou = 1;
    vector<int> med;

    for(int i = 0; i < n; i+2) {
        if(n-1 != 1) {
           int x = max(a[i], a[i+1]);
            ave += x;
            cou++;
            ave /= cou;
            int ano = min(a[i], a[i+1]);
            if(ave < ano) {
                cou++;
                ave = (ave + ano) / cou;
            }

            med.push_back(x);
        }
        else {
            if(a[i] > ave) {
                cou++;
                ave = (ave + a[i]) / cou;
            }
        }
    }
// 中央値
/*    vector<int> med;
    for(int i = 0; i < n; i+2) {
        if(n-1 != 1) {
            int x = max(a[i], a[i+1]);
            med.push_back(x);
        }
    }*/
    sort(med.begin(), med.end());
    int y = med.size() / 2 - 1;

    printf("%e\n", ave);
    cout << med[y] << endl;
    return 0;
}
