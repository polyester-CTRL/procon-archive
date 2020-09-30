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
  ll h, w;
  cin >> h >> w;
  if(h % 3 == 0 || w % 3 == 0) {
    cout << 0 << endl;
  } else {
    ll ans = 1001001001;
    for(int i = 0; i < 2; i++) {
      ll a = h;
      ll b = w;
      if(i == 1) {
        swap(a, b);
      }
      vector<ll> c(3);
      c[0] = ((a + 1) / 3) * b;
      a -= ((a + 1) / 3);
      c[1] = b / 2 * a;
      c[2] = (b + 1) / 2 * a;
      ans = min(ans, *max_element(c.begin(), c.end()) -
                         *min_element(c.begin(), c.end()));
      swap(a, b);
      c[1] = b / 2 * a;
      c[2] = (b + 1) / 2 * a;
      ans = min(ans, *max_element(c.begin(), c.end()) -
                         *min_element(c.begin(), c.end()));
    }
    cout << ans << endl;
  }
  return 0;
}