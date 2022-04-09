#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    const int nmmax = 50;
    int a[nmmax], b[nmmax];

    for (int i = 0; i < m; ++i)
        cin >> a[i] >> b[i];

    int road[nmmax];
    for (int i= 0; i < n; ++i)
        road[i] = 0;

    for (int i = 0; i < m; ++i){
        road[a[i] - 1] += 1;
        road[b[i] - 1] += 1;
    }

    for (int i = 0; i < n; ++i)
        cout << road[i] <<endl;
}
