#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N;
    int A, B;
    int cnt = 0;

    cin >> N;
    while(cnt < N){
        cin >> A >> B;
        cout << A+B << endl;
        cnt++;
    }
    return 0;
}
