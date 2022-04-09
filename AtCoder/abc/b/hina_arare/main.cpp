#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int y = 0;

    for (int i = 0; i < N; i++){
        string S;
        cin >> S;

        if (S == "Y")
            y++;
    }

    if (y != 0)
        cout << "Four" << endl;
    else if (y == 0)
        cout << "Three" << endl;
}
