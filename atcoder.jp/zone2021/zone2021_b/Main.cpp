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
  int n, x, y;
  cin >> n >> x >> y;
  vector<int> d(n), h(n);
  double ans = 0.0;
  for(int i = 0; i < n; i++) {
    cin >> d[i] >> h[i];
    double b = (y - h[i]) / (double)(x - d[i]);
    ans = max(ans, h[i] - b * d[i]);
  }
  printf("%.10f\n", ans);

  return 0;
}