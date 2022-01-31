#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n+1);
    for(int i = 1; i < n+1; i++) cin >> a.at(i);
    vector<int> t(q+1), x(q+1), y(q+1);
    for(int i = 1; i < q+1; i++) cin >> t.at(i) >> x.at(i) >> y.at(i);

    int t2 = 0;
    for (int i = 1; i < q+1; i++) {
        if (t.at(i) == 1){
            int lef = x.at(i) - t2;
            int rig = y.at(i) - t2;
            if (lef < 1){
                while (lef < 1)
                    lef += n;
            }
            if (rig < 1) {
                while (rig < 1)
                    rig += n;
            }
            swap(a.at(lef), a.at(rig));
        }
        if (t.at(i) == 2) t2++;

        if (t.at(i) == 3){
            int shif = x.at(i) - t2;
            if (shif < 1) {
                while (shif < 1)
                    shif += n;
            }
            cout << a.at(shif) << endl;
        }
    }
    return 0;
}
