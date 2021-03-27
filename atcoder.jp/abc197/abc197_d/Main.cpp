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
  int n;
  double x0, y0, x2, y2, x1, y1;
  cin >> n >> x0 >> y0 >> x2 >> y2;
  double cx = (x2 + x0) / 2, cy = (y2 + y0) / 2;
  double th = atan2(y0 - cy, x0 - cx);
  th += 360 / (double)n * acos(-1) / 180;
  double r = sqrt((cx - x0) * (cx - x0) + (cy - y0) * (cy - y0));
  x1 = r * cos(th);
  y1 = r * sin(th);
  x1 += cx;
  y1 += cy;
  printf("%.10f %.10f\n", x1, y1);
  return 0;
}