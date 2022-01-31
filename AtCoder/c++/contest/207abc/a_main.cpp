#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> v(3);
    v.at(0) = a;
    v.at(1) = b;
    v.at(2) = c;

    sort(v.begin(), v.end());

    cout << v.at(1) + v.at(2) << endl;
}

/*
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int ans = a+b+c - min({a,b,c});
    cout << ans << endl;
    return 0;
}
*/

