#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int q;
    cin >> q;
    vector<int> t(q), x(q);
    rep(i,q) cin >> t.at(i) >> x.at(i);

    deque<int> deq;
    rep(i,q) {
        if (t.at(i) == 1) deq.push_front(x.at(i));
        if (t.at(i) == 2) deq.push_back(x.at(i));
        if (t.at(i) == 3) cout << deq.at(x.at(i) - 1) << endl;
    }
    return 0;
}
