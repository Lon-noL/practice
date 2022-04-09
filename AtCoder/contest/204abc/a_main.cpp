#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x == y){
        cout << x;
    }
    if (x != y){
        cout << 3 - (x + y) << endl;
    }
}
