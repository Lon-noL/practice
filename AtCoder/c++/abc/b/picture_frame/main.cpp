#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    char fra[102][102];
    char pic[100][100];

    for (int i = 0; i < h; i++)
        cin >> pic[i];

    for (int i = 0; i < h + 2; i++)
        for (int j = 0; j < w + 2; j++)
            fra[i][j] = '#';

    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            fra[i + 1][j + 1] = pic[i][j];

    for (int i = 0; i < h + 2; i++){
        for (int j = 0; j < w + 2; j++)
            cout << fra[i][j];
        cout << endl;
    }
}
