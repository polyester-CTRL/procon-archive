#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
ll op(ll a, ll b) { return a ^ b; }
ll e() { return 0; }
int main() {
  int n, q;
  cin >> n >> q;
  segtree<ll, op, e> seg(n);
  for(int i = 0; i < n; i++) {
    ll tmp;
    cin >> tmp;
    seg.set(i, tmp);
  }
  for(int i = 0; i < q; i++) {
    ll t, x, y;
    cin >> t >> x >> y;
    x--;
    if(t == 1) {
      seg.set(x, seg.get(x) ^ y);
    } else {
      cout << seg.prod(x, y) << '\n';
    }
  }

  return 0;
}