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
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  ll ans = max({a * c, a * d, b * c, b * d});
  if(a <= 0 && b >= 0) {
    ans = max(ans, (ll)0);
  }
  if(c <= 0 && d >= 0) {
    ans = max(ans, (ll)0);
  }
  cout << ans << endl;
  return 0;
}