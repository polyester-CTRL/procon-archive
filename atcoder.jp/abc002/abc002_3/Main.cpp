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
  double a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  double ans = 0;
  c -= a;
  e -= a;
  d -= b;
  f -= b;
  printf("%.5f\n", abs(c * f - d * e) / 2);

  return 0;
}