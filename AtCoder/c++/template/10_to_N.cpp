#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

// 10進数からN進数への変換
int main() {//binary_converter(int num, int N) {
    int num, N;
    cin >> num >> N;
    vector<int> s;

    while(num/N != 0) {
        int x = 0;
        x = num%N;
        num /= N;
        s.push_back(x);
    }
    if(num%N == 1) s.push_back(num);

    reverse(s.begin(), s.end());

    int m = s.size();
    rep(i,m) cout << s[i] << endl;
    return (0);
}
