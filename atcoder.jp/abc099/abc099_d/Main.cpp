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
  int n, c;
  cin >> n >> c;
  vector<vector<int>> d(c, vector<int>(c, 0));
  for(int i = 0; i < c; i++) {
    for(int j = 0; j < c; j++) {
      cin >> d[i][j];
    }
  }
  vector<vector<int>> g(n, vector<int>(n, 0));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> g[i][j];
      g[i][j]--;
    }
  }
  vector<vector<ll>> sum(c, vector<ll>(3, 0));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      for(int k = 0; k < c; k++) {
        sum[k][(i + j) % 3] += d[g[i][j]][k];
      }
    }
  }
  ll ans = 1001001001;
  for(int i = 0; i < c; i++) {
    for(int j = 0; j < c; j++) {
      if(i == j) {
        continue;
      }
      for(int k = 0; k < c; k++) {
        if(i == k || j == k) {
          continue;
        }
        ans = min(ans, sum[i][0] + sum[j][1] + sum[k][2]);
      }
    }
  }
  cout << ans << endl;
  return 0;
}