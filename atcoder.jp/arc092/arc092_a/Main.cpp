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
  vector<vector<int>> g(2 * n + 5, vector<int>(2 * n + 5, 0));
  for(int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    g[x][y]++;
  }
  vector<pair<int, int>> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
  }
  sort(a.begin(), a.end());
  // for(int i = 0; i < n; i++) {
  //   swap(a[i].first, a[i].second);
  // }
  // sort(a.begin(), a.end());
  // for(int i = 0; i < n; i++) {
  //   swap(a[i].first, a[i].second);
  // }
  int ans = 0;
  for(int i = 0; i < n; i++) {
    bool ok = false;
    for(int k = a[i].second - 1; k >= 0; k--) {
      for(int j = 0; j < a[i].first; j++) {
        if(g[j][k] > 0) {
          g[j][k] = 0;
          ans++;
          ok = true;
          break;
        }
      }
      if(ok) {
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}