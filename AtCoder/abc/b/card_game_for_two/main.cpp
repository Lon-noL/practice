#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> card(n);
    rep(i,n) cin >> card.at(i);

    sort(card.begin(), card.end());
    int a = 0, b = 0;
    for (int i = n-1; i >= 0; i -= 2){
        a += card.at(i);
        if (i != 0){
            b += card.at(i-1);
        }
    }

    cout << a-b << endl;
    return 0;
}
