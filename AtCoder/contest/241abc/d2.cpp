#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
using ll = long long;
using P = pair<int,int>;

// Trie木

const int K = 60;
struct Trie {
  vector<int> l, r, c;
  Trie(): l(1,-1), r(1,-1), c(1,0) {}

  int newNode() {
    int i = l.size();
    l.push_back(-1);
    r.push_back(-1);
    c.push_back(0);
    return i;
  }

  int getNext(int i, int a, bool read=true) {
    if (a == 0) {
      if (l[i] == -1 && !read) {
        int ni = newNode();
        l[i] = ni;
      }
      return l[i];
    } else {
      if (r[i] == -1 && !read) {
        int ni = newNode();
        r[i] = ni;
      }
      return r[i];
    }
  }

  void add(ll x) {
    int i = 0;
    c[0]++;
    for (ll b = 1ll<<K; b; b >>= 1) {
      int a = (x&b)?1:0;
      i = getNext(i,a,false);
      c[i]++;
    }
  }

  int count(ll x) { // count leq x
    int i = 0, res = 0;
    for (ll b = 1ll<<K; b; b >>= 1) {
      int a = (x&b)?1:0;
      if (a == 1) {
        if (l[i] != -1) res += c[l[i]];
      }
      i = getNext(i,a);
      if (i == -1) return res;
    }
    res += c[i];
    return res;
  }

  ll getKth(int k) {
    if (k <= 0 || c[0] < k) return -1;
    int i = 0;
    ll res = 0;
    for (ll b = 1ll<<K; b; b >>= 1) {
      if (l[i] != -1 && c[l[i]] >= k) {
        i = l[i];
      } else {
        k -= c[l[i]];
        i = r[i];
        res |= b;
      }
    }
    return res;
  }
};

int main() {
  int q;
  cin >> q;
  Trie t;
  rep(qi,q) {
    int type; ll x;
    cin >> type >> x;
    if (type == 1) {
      t.add(x);
    } else {
      int k;
      cin >> k;
      ll ans = -1;
      if (type == 2) {
        int i = t.count(x)-k+1;
        ans = t.getKth(i);
      } else {
        int i = t.count(x-1)+k;
        ans = t.getKth(i);
      }
      cout << ans << endl;
    }
  }
  return 0;
}
