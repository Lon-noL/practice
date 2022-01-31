#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;

    vector<tuple<string, int, int>> res(n);

    int c = 0;
    rep(i,n) {
        string a;
        int b;
        cin >> a >> b ;
        c += 1;

        res.at(i) = make_tuple(a, b*-1, c);
    }
    sort(res.begin(), res.end());

    rep(i,n) printf("%d\n", get<2>(res.at(i)));
    return 0;
}
