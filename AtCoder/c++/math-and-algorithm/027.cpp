#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int N, A[200009], C[200009];

// a[l],a[l+1],,, a[r-1]を小さい順に整列する関数
void MergeSort(int l, int r) {
    // r - l = 1 の場合、すでにソートされているので何もしない
    if(r - l == 1) return;

    // 2つに分割した後、小さい配列をソート
    int m = (l + r) /2;
    MergeSort(l , m);
    MergeSort(m, r);

    // 以下、merge操作
    int c1 = l, c2 = m, cnt = 0;
    while(c1 != m || c2 != r) {
        if(c1 == m) {
            // A'がからの場合
            C[cnt] = A[c2]; c2++;
        }
        else if(c2 == r) {
            C[cnt] = A[c1]; c1++;
        }
        else {
            if(A[c1] <= A[c2]) {
                C[cnt] = A[c1];
                c1++;
            }
            else {
                C[cnt] = A[c2];
                c2++;
            }
        }
        cnt++;
    }

    // 列CをAに移す
    for(int i = 0; i < cnt; i++) A[l+i] = C[i];
}

int main() {
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> A[i];

    MergeSort(1,N + 1);

    for(int i = 1; i <= N; i++) cout << A[i] << endl;
    return 0;
}
