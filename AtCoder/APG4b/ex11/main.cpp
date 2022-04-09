#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;
  //int sum = A;

  for (int i = 0; i < N; i++){
      string    OP;
      int       B;
      cin >> OP >> B;

      if (OP == "+"){
          A += B;
          cout << i + 1 << ":" << A << endl;
      }

      else if (OP == "-"){
          A -= B;
          cout << i + 1 << ":" << A << endl;
      }

      else if (OP == "*"){
          A *= B;
          cout << i + 1 << ":" << A << endl;
      }

      else if (OP == "/"){
          if (B == 0){
          cout << "error" << endl;
          break;
          }

          A /= B;
          cout << i + 1 << ":" << A << endl;
          }
      }
}
