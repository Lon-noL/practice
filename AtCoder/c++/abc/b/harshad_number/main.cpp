#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, n, sum = 0;
    cin >> N;
    n = N;

    while (n % 10 != 0){
        sum += n % 10;
        n /= 10;
    }
//    cout << sum << endl;

    if (N % sum == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
