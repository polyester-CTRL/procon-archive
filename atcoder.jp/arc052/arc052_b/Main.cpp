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
  int n, q;
  cin >> n >> q;
  vector<double> v(10010, 0), sum(10010, 0);
  for(int i = 0; i < n; i++) {
    double x, r, h;
    cin >> x >> r >> h;
    for(int j = 0; j < h; j++) {
      v[x + j] += (double)(r * (h - j) / h) * (r * (h - j) / h) * (h - j);
      v[x + j] -=
          (double)(r * (h - j - 1) / h) * (r * (h - j - 1) / h) * (h - j - 1);
    }
  }
  for(int i = 0; i < 10010; i++) {
    sum[i + 1] = sum[i] + v[i];
  }
  for(int i = 0; i < q; i++) {
    int a, b;
    cin >> a >> b;
    printf("%.10f\n", (sum[b] - sum[a]) * acos(-1) / 3.0);
  }
  return 0;
}