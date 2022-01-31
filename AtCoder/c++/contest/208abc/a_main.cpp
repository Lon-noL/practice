#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int a, b;
    cin >> a >> b;

    if (a > b){
        cout << "No" << endl;
        return 0;
    }

    if (a*6 >= b){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}
