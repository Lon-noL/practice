#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
// 再帰関数
int sum_digit(int x);

int main(){
    int n, a, b;
    cin >> n >> a >> b;

    vector<int> v(10000);
    rep(i,10000) v.at(i) = i+1;

    int ans = 0;
    for (int i = 0; i < n; i++){
        if (sum_digit(v.at(i)) >= a && sum_digit(v.at(i)) <= b){
            ans += v.at(i);
        }
    }
    cout << ans << endl;
    return 0;
}

int sum_digit(int x){
    int sum = 0;

    if (x/10 == 0) {
        sum += x%10;
        return (sum);
    }
    else{
        sum += x%10;
        x /= 10;
        sum += sum_digit(x);
    }
    return (sum);
}

// while
#include <iostream>
using namespace std;

// 各桁の和を計算する関数
int findSumOfDigits(int n) {
  int sum = 0;
  while (n > 0) { // n が 0 になるまで
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  int total = 0;
  for (int i = 1; i <= N; ++i) {
    int sum = findSumOfDigits(i); // i の各桁の和
    if (sum >= A && sum <= B) { //  i の各桁の和が A 以上 B 以下かどうか
      total += i;
    }
  }
  cout << total << endl;
}
