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
  ll l, x, y, s, d;
  cin >> l >> x >> y >> s >> d;
  double ans;
  if(d < s) {
    if(x < y) {
      ans = min((double)(s - d) / (y - x), (double)(l - s + d) / (y + x));
    } else {
      ans = (double)(l - s + d) / (y + x);
    }
  } else {
    if(x < y) {
      ans = min((double)(d - s) / (y + x), (double)(l - d + s) / (y - x));
    } else {
      ans = (double)(d - s) / (y + x);
    }
  }
  printf("%.10f\n", ans);
  return 0;
}