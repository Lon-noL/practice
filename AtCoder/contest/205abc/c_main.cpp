#include <bits/stdc++.h>
using namespace std;

//素直に計算すると桁が大きすぎてだめ　効率の良いアルゴリズムを見つける
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    long int ac = a, bc = b;

    for (int i = 0; i < c - 1; i++){
        ac *= a;
    }

    for (int i = 0; i < c - 1; i++){
        bc *= b;
    }

//    cout << ac << endl << bc << endl;

    if (ac == bc)
        cout << "=" << endl;
    else if (ac < bc)
        cout << "<" << endl;
    else if (ac > bc)
        cout << ">" << endl;
}
//cが同じなので、計算しなくてもaとbのあたいがそのままの大小関係になる。
//マイナスの場合はcが奇数の時は同じ、偶数の場合はamとbの絶対値の代償関係
/*
int main() {
    ll a, b, c:
    cin >> a >> b >> c;
    if (c%2 == 0) {
        a = abs(a);
        b = abs(b);
    }

    if (a < b) cout << "<" << endl;
    if (a == b) cout << "=" << endl;
    if (a > b) cout << ">" << endl;
    return 0:
}
*/
