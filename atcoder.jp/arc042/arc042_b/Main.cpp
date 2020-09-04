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
  int x, y;
  cin >> x >> y;
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  a.push_back(a[0]);
  b.push_back(b[0]);
  double ans = 1001001001;
  for(int i = 0; i < n; i++) {
    int a0, b0, c0;
    for(int j = -200; j <= 200; j++) {
      for(int k = -200; k <= 200; k++) {
        if(j == 0 && k == 0) {
          continue;
        }
        if(j * a[i] + k * b[i] == j * a[i + 1] + k * b[i + 1]) {
          a0 = j;
          b0 = k;
          c0 = -(j * a[i] + k * b[i]);
          break;
        }
      }
    }
    ans = min(ans, (double)abs(a0 * x + b0 * y + c0) / sqrt(a0 * a0 + b0 * b0));
  }
  printf("%.10lf\n", ans);
  return 0;
}