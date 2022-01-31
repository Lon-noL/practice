#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A[1000];
  cin >> N;
  int sum = 0;

  for (int i = 0; i < N; ++i){
    cin >> A[i];
    sum += A[i];
  }

  sum /= N;//平均点

  for (int i = 0; i < N; ++i){
      int ans = 0;
      ans = A[i] - sum;
      if (ans < 0)
        ans *= -1;

      cout << ans << endl;
  }
}
