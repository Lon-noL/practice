#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    string s, t;
    cin >> s >> t;

    int l = s.size();
    set<int> st;
    for(int i = 0; i < l; i++) {
        int k = (t[i]-s[i]+26)%26;
        st.insert(k);
    }
    if(st.size() == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
