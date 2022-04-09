#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
// bit 全探索
// 1は(, 0は) を示す
int main(){
    int n;
    cin >> n;
// 例外処理
    if (n % 2 != 0) return 0;
// 全探索
    for (int tmp = (1 << n)-1; tmp >= 0; tmp--){
        bitset<20> s(tmp);
        int out = 0, one = 0, zero = 0;
// 正しいカッコ列の条件　1.'('と')'の個数が同じ　2.常に'('の数が')'の数以上である
        for (int i = n-1; i >= 0; i--){
            if (s.test(i)) one++;
            else zero++;
            if (one < zero) out = 1;
        }
        if (one == zero && out == 0){
            for (int i = n-1; i >= 0; i--){
                if (s.test(i)) cout << '(';
                else cout << ')';
            }
            cout << endl;
        }
    }
    return 0;
}
