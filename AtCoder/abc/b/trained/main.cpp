#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int>v;
    for (int i = 0; i < n; i++){
        int z;
        cin >> z;
        z--;//                  ポインタ？　番地に直している
        v.push_back(z);//       それを繋げて並列にしている
    }
    int now = 0, c = 0;
    for(;;){
        if (now == 1){
            cout << c << endl;
            break;
        }
        if (c >= n){
            cout << -1 << endl;
            break;
        }
        c++;
        now = v[now];
    }
}
