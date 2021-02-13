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
  int t;
  cin >> t;
  while(t--) {
    ll l, r;
    cin >> l >> r;

    ll ans = 0;
    if(2 * l > r) {
      cout << 0 << '\n';
      continue;
    }
    if(l == 0 && r == 0) {
      cout << 1 << '\n';
      continue;
    }
    ans = (r - 2 * l + 1) * ((r - 2 * l + 1) + 1) / 2;
    cout << ans << '\n';
  }
  return 0;
}