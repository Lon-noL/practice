#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int N;
vector<pair<int, int>> x(2010), y(4000000);

int main(){
    cin >> N;
    rep(i,N) {
        int a, b;
        cin >> a >> b;
        x[i] = make_pair(a, b);
    }

    int index = 0;
    for(int i = 0; i < N-1; i++) {
        for(int j = i+1; j < N; j++) {
            if(x[i].first == x[j].first) {
                int a, b;
                a = x[i].second;
                b = x[j].second;
                y[index] = make_pair(a,b);
                index++;
            }
        }
    }

    int ans = 0;
    for(int i = 0; i <= index-1; i++) {
        for(int j = i+1; j <= index; j++) {
            if(y[i].first == y[j].first && y[i].second == y[j].second || y[i].first == y[j].second && y[i].second == y[j].first ) {
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
