#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

vector<long long> enum_divisors(long long N) {
    vector<long long> res;
    for (long long i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            res.push_back(i);
            // 重複しないならば i の相方である N/i も push
            if (N/i != i) res.push_back(N/i);
        }
    }
    // 小さい順に並び替える
    sort(res.begin(), res.end());
    return res;
}

int main() {
    long long N;
    cin >> N;
    ll ans = 0;
    const auto &res = enum_divisors(N);
    for (int i = 0; i < res.size(); ++i) {
        if(res[i] <= 20000000) {
            ans += res[i];
        }
        else {
            cout << ans << endl;
            return 0;
        }
    }
}
