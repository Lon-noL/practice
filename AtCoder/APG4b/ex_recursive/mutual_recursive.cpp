#include <bits/stdc++.h>
using namespace std;

// プロトタイプ宣言 (1.15.関数「細かい話」を参照)
bool is_even(int);
bool is_odd(int);

// nが偶数かを判定する
bool is_even(int n) {
    if (n == 0){
        return true;
    }

    return is_odd (n - 1);

}

bool is_odd(int n){
    if (n == 0){
        return false;
    }

    return is_even (n - 1);

}

int main() {
  cout << is_even(4) << endl;  // 1
  cout << is_odd(5) << endl;   // 1
  cout << is_even(3) << endl;  // 0
}
