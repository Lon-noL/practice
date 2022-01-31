#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int s, t;
    cin >> s >> t;

    int ans = 0;
    for (int a = 0; a <= s; a++){
        for (int b = 0; b <= s; b++){
            for (int c = 0; c <= s; c++){
                if (a+b+c <= s && a*b*c <= t) ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
