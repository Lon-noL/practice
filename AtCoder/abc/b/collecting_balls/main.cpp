#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, sum = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;

        if (x <= k - x)
            sum += x * 2;
        else
            sum += (k - x) * 2;
    }
    cout << sum << endl;
}
