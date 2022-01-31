#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int N, A[101010];

void _main() {
    cin >> N;
    rep(i, 1, N + 1) cin >> A[i];

    int cur = 1;
    rep(i, 0, 101010) {
        cur = A[cur];
        if (cur == 2) {
            printf("%d\n", i + 1);
            return;
        }
    }
    printf("-1\n");
}
