#include <bits/stdc++.h>
using namespace std;

int main(){
  int Q;
  cin >> Q;
  queue<pair<int, int>> q;
  for (int i = 0; i < Q; i++){
    int t;
    cin >> t;
    if (t == 1){
      int x, c;
      cin >> x >> c;
      q.push(make_pair(x, c));
    }
    if (t == 2){
      int c;
      cin >> c;
      long long ans = 0;
      while (!q.empty()){
        if (q.front().second > c){
          q.front().second -= c;
          ans += (long long) q.front().first * c;
          break;
        } else {
          ans += (long long) q.front().first * q.front().second;
          c -= q.front().second;
          q.pop();
        }
      }
      cout << ans << endl;
    }
  }
}
