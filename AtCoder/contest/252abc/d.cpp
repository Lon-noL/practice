#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

const int INF = 100000;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++){
    cin >> A[i];
    A[i]--;
  }
  vector<int> cnt(200000, 0);
  for (int i = 0; i < N; i++){
    cnt[A[i]]++;
  }
  vector<vector<long long>> dp(4, vector<long long>(2000001, 0));
  dp[0][0] = 1;
  for (int i = 0; i < 200000; i++){
    for (int j = 0; j < 4; j++){
      dp[j][i + 1] += dp[j][i];
      if (j < 3){
        dp[j + 1][i + 1] += dp[j][i] * cnt[i];
      }
    }
  }
  cout << dp[3][200000] << endl;
}
