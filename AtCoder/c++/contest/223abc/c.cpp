#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

// シュミレーション

int main() {
    int n;
    cin >> n;
    vector<double> a(n), b(n);
    rep(i,n) cin >> a[i] >> b[i];
// 左右の燃えている導火線
    int li = 0, ri = n-1;
// 今いる導火線が何センチ燃えているか
    double lx = 0, rx = 0;
    double ans = 0;
// 同じ導火線が燃えるまでループ
    while(li < ri) {
        // 導火線が燃え尽きる時間
        double lt = (a[li] - lx) / b[li];
        double rt = (a[ri] - rx) / b[ri];

        if(lt < rt) {
            ans += b[li] * lt;
            lx = 0;
            rx += b[ri] * lt;
            li++;
        } else {
            ans += b[li] * rt;
            rx = 0;
            lx += b[li] * rt;
            ri--;
        }
    }
    ans += (a[li] - lx - rx) / 2;
    printf("%.10f\n", ans);
    return 0;
}
