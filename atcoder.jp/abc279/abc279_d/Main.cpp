#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iomanip>
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
  ll a, b;
  cin >> a >> b;
  auto func = [a, b](double x) {
    double ans = 0;
    ans = a / sqrt(1 + x) + b * x;
    return ans;
  };
  int cnt = 1000;
  double low = 0;
  double high = 1e18;
  while(cnt--) {
    double c1 = (low * 2 + high) / 3;
    double c2 = (low + high * 2) / 3;
    if(func(c1) > func(c2)) {
      low = c1;
    } else {
      high = c2;
    }
  }
  double ans = 1e18;
  for(ll c3 = max(0.0, low - 10); c3 < max(0.0, low - 10) + 10; c3++) {
    ans = min(ans, func(c3));
  }
  printf("%.10f\n", ans);
  return 0;
}