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
  cin >> n;
  vector<double> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  double x = 0.0, ans = 0.0;
  x = a[n / 2] / 2.0;
  for(int i = 0; i < n; i++) {
    ans += x + a[i] - min(a[i], 2.0 * x);
  }
  printf("%.10f\n", ans / (double)n);
  return 0;
}