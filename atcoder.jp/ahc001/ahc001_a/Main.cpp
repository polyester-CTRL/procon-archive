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
  vector<int> x(n), y(n), r(n);
  vector<vector<int>> g(100000);
  for(int i = 0; i < n; i++) {
    cin >> x[i] >> y[i] >> r[i];
    g[x[i]].push_back(y[i]);
  }
  for(int i = 0; i < 100000; i++) {
    sort(g[i].begin(), g[i].end());
    g[i].push_back(10000);
  }
  for(int i = 0; i < n; i++) {
    cout << x[i] << " ";
    cout << y[i] << " ";
    cout << x[i] + 1 << " ";
    for(int j = 0; j < g[x[i]].size(); j++) {
      if(y[i] < g[x[i]][j]) {
        cout << min(g[x[i]][j], y[i] + r[i]);
        break;
      }
    }
    cout << '\n';
    // cout << y[i] + 1 << '\n';
  }
  return 0;
}