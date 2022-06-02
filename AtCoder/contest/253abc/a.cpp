#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
/*
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if(a > b && c > b){
        cout << "No" << endl;
        return 0;
    }
    else if(a < b && c < b){
        cout << "No" << endl;
        return 0;
    }
    else{
        cout << "Yes" << endl;
    }
    return 0;
}*/

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v = {a, b, c};
    sort(v.begin(), v.end());
    cout << (b == v[1] ? "Yes" : "No") << endl;
    return 0;
}
