#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    string x;
    cin >> x;

    if (x[0] == x[1] && x[1] == x[2] && x[2] == x[3]) {
        cout << "Weak" << endl;
    return 0;
    }
    // int countp = 0;
    int countm = 0;
    for (int i = 3; i > 0; i--){
        int mem = 0;
        mem = x[i] - x[i-1];
        if (mem == 1 || mem == -9) countm++;
    }
    if (/* countp == 3 ||*/ countm == 3) {
        cout << "Weak" << endl;
        return 0;
    }
    cout << "Strong" << endl;
    return 0;
}
