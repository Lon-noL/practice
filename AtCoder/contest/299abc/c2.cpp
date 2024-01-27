#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // ーが1つしかない時の対策。先頭と末尾をカウントさせる為
    vector<int> v = {-1, n};
    for(int i = 0; i < n; i++) {
        if(s[i] == '-') {
            v.push_back(i);
        }
    }
    sort(v.begin(),v.end());
    // reverse(v.begin(),v.end());
    int size = v.size();
    int ans = -1;
    //  rep(i,size) cout << v[i] << endl;

    // ○がない
    if(size - 2 == n) {
        cout << -1 << endl;
        return 0;
    }
    // ーがない
    else if(size == 2) {
        cout << -1 << endl;
        return 0;
    }
    else {
        for(int i = size - 1; i >= 1; i--) {
            if(v[i] - v[i - 1] > ans) {
                ans = v[i] - v[i - 1] - 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
