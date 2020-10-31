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
#include <atcoder/dsu>
using namespace std;
using namespace atcoder;
using ll = long long;
const ll MOD = 998244353;
int main() {
  int n, k;
  cin >> n >> k;
  vector<vector<int>> a(n, vector<int>(n));
  dsu line(n), column(n);
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i == j) {
        continue;
      }
      int tmp = 0;
      for(int x = 0; x < n; x++) {
        if(a[i][x] + a[j][x] > k) {
          tmp++;
          break;
        }
      }
      if(tmp == 0) {
        line.merge(i, j);
      }
    }
    
  }
  ll ans = 1;
  vector<vector<int>> b = line.groups();
  for(int i = 0; i < b.size(); i++) {
    for(int j = 1; j <= line.size(b[i][0]); j++) {
      ans *= j;
      ans %= MOD;
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i == j) {
        continue;
      }
      int tmp = 0;
      for(int y = 0; y < n; y++) {
        if(a[y][i] + a[y][j] > k) {
          tmp++;
          break;
        }
      }
      if(tmp == 0) {
        column.merge(i, j);
      }
    }
  }
  b = column.groups();
  for(int i = 0; i < b.size(); i++) {
    for(int j = 1; j <= column.size(b[i][0]); j++) {
      ans *= j;
      ans %= MOD;
    }
  }

  cout << ans << endl;
  return 0;
}