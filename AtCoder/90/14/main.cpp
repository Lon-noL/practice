#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i,n) cin >> a.at(i);
    rep(i,n) cin >> b.at(i);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll dist = 0;
    rep(i,n){
        dist += abs(a.at(i) - b.at(i));
    }
    cout << dist << endl;
    return 0;
}
/*    rep(i,n){
        if (b.size() == 1){
            dist += abs(a.at(i) - b.at(0));
            break;
        }

        auto itr = lower_bound(b.begin(), b.end(), a.at(i));
        if (a.at(i) != 0 && *itr == 0){
            itr = b.end();
        }
        int x = abs(a.at(i) - *itr);

        if (itr != b.begin()){
            int y = abs(a.at(i) - *(itr-1));
            if (x < y){
                dist += x;
                b.erase(itr);
            }
            else{
                dist += y;
                b.erase(itr-1);
            }
            continue;
        }
        dist += x;
        b.erase(itr);
    }

*/
