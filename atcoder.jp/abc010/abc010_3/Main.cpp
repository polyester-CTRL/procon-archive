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
int main() {
  int sx, sy, tx, ty, t, v;
  cin >> sx >> sy >> tx >> ty >> t >> v;
  int n;
  cin >> n;
  bool ok = false;
  ll d = t * v;
  d *= d;
  for(int i = 0; i < n; i++) {
    ll x, y;
    cin >> x >> y;
    ll a = (sx - x) * (sx - x) + (sy - y) * (sy - y);
    ll b = (tx - x) * (tx - x) + (ty - y) * (ty - y);
    if(4 * a * b <= d * d - 2 * d * a - 2 * d * b + 2 * a * b + a * a + b * b) {
      ok = true;
    }
  }
  if(ok) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
  return 0;
}