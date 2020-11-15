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
  ll sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;
  double ans = (double)(gx - sx) * (sy) / (sy + gy);
  ans += sx;
  printf("%.10f\n", ans);
  return 0;
}