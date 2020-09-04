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
  int n, m;
  int c, d;
  cin >> c >> d >> n >> m;
  n %= 12;
  double a, b;
  a = m * 6.0;
  b = n * 30.0 + a / 12.0;
  // printf("%.5f %.5f\n", a, b);
  // printf("%.5f\n", min(max(a, b) - min(a, b), min(a, b) + 360 - max(a, b)));
  long double ans = min(max(a, b) - min(a, b), min(a, b) + 360 - max(a, b));
  ans = c * c + d * d - 2 * c * d * cos(2 * acos(-1) * ans / 360.0);
  ans = sqrt(ans);
  printf("%.12Lf\n", ans);
  return 0;
}
