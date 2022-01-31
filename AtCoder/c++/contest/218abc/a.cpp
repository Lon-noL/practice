#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int N;
    string S;
    cin >> N >> S;

    if(S[N-1] == 'o') cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
