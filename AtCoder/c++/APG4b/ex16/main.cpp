#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }
/*ループ使わずに書く
  int count = 0;

  if (data.at(0) == data[1]){
    count++;
  }

  if (data[1] == data[2]){
      count++;
  }

  if (data[2] == data[3]){
      count++;
  }

  if (data[3] == data[4]){
      count++;
  }

  if (count != 0){
      cout << "Yes" << endl;
  }
  else {
      cout << "No" << endl;
  }*/

//ループ使ってかく
  bool ans = false;

  for (int i = 0; i < data.size() - 1; i++){
      if (data.at(i) == data.at(i + 1)){
          ans = true;
      }
  }

  if (ans){
      cout << "YES" << endl;
  }
  else
    cout << "NO" << endl;
}
