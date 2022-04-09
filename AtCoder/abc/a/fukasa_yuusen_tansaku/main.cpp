#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

vector<vector<char>> t(500, vector<char>(500));
vector<vector<bool>> checked(500, vector<bool>(500, false));
void fill_road(vector<vector<char>> &t, vector<vector<bool>> &checked, int y, int x, int h, int w);


int main(){
    int h, w;
    cin >> h >> w;
    rep(i,h) rep(j,w) cin >>t.at(i).at(j);
//search_s
    int x, y;
    rep(i,h) {
        rep(j,w) {
            if (t.at(i).at(j) == 's'){
                y = i;
                x = j;
                break;
            }
        }
    }

//fill_road_from_s_to_g
    fill_road(t, checked, y, x, h, w);
//find_g
    rep(i,h) {
        rep(j,w) {
            if (t.at(i).at(j) == 'g') {
                if (checked.at(i).at(j)) {
                    cout << "Yes" << endl;
                    return 0;
                }
                else {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}

void fill_road(vector<vector<char>> &t, vector<vector<bool>> &checked, int y, int x, int h, int w){
//base_case
    if (y < 0 || x < 0 || x >= w || y >= h) return;
    if (t.at(y).at(x) == '#') return;
    if (checked.at(y).at(x)) return;
//recursive
    checked.at(y).at(x) = true;
    fill_road(t, checked, y - 1, x    , h, w);  // 上
    fill_road(t, checked, y    , x + 1, h, w);  // 右
    fill_road(t, checked, y + 1, x    , h, w);  // 下
    fill_road(t, checked, y    , x - 1, h, w);  // 左
}
