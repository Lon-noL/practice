#include <bits/stdc++.h>
using namespace std;
int N, flag[101];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++){
        int d;
        cin >> d;
        flag[d] = 1;
    }
    int ans = 0;
    for (int i = 0; i < N; i++){
        ans += flag[i];
    }
    cout << ans << endl;
}
