#include <bits/stdc++.h>
using namespace std;
const int INF = 100000;

int main(){
  int N;
  cin >> N;

  vector<string> S(N);
  for (int i = 0; i < N; i++){
    cin >> S[i];
  }

  vector<vector<int>> p(N, vector<int>(10));
  for (int i = 0; i < N; i++){
    for (int j = 0; j < 10; j++){
      p[i][S[i][j] - '0'] = j;
    }
  }

  int ans = INF;
  for (int i = 0; i < 10; i++){
    vector<int> cnt(10, 0);
    for (int j = 0; j < N; j++){
      cnt[p[j][i]]++;
    }

    int t = 0;
    for (int j = 0; j < 10; j++){
      t = max(t, j + (cnt[j] - 1) * 10);
    }
    ans = min(ans, t);
  }

  cout << ans << endl;
}
