#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

string make(string s, ll i) {
    string t = to_string(i);
    s = s + ' ' +  t + ' ' + s;
    return s;
}

int main() {
    ll n;
    cin >> n;

    vector<string> s(n+1);
    s[1] = "1";

    for(ll i = 2; i < n+1; i++) {
        s[i] = make(s[i-1], i);
    }

    cout << s[n] << endl;
/*
    ll len = s[n].size();
    for(ll i = 0; i < len; i++) {
        cout << s[n][i];
        if(i != len-1) cout << ' ';
    }
    cout << endl;*/
    return 0;
}
