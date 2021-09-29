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
  int r, d;
  cin >> r >> d;
  r *= r;
  double ans = r * d * 2.0 * acos(-1) * acos(-1);
  printf("%.6f\n", ans);
  return 0;
}