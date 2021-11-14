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
  int n = 1000;
  vector<int> a(n), b(n), c(n), d(n);
  vector<pair<int, int>> e(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
    e[i] = {abs(c[i] - a[i]) + abs(d[i] - b[i]), i};
  }
  sort(e.begin(), e.end());
  int m = 50;
  int nowX = 400, nowY = 400;
  cout << m << " ";
  for(int i = 0; i < m; i++) {
    cout << e[i].second + 1 << " ";
  }
  cout << endl;
  cout << 2 * m + 2 << " ";
  cout << nowX << " " << nowY << " ";
  for(int i = 0; i < m; i++) {
    int idx = e[i].second;
    cout << a[idx] << " " << b[idx] << " " << c[idx] << " " << d[idx] << " ";
  }
  cout << nowX << " " << nowY << endl;
  return 0;
}