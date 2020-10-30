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
  vector<int> x(n), y(n), z(n);
  for(int i = 0; i < n; i++) {
    cin >> x[i] >> y[i] >> z[i];
  }
  vector<vector<int>> d(n, vector<int>(n, 1001001001));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      d[i][j] = min(d[i][j],
                    abs(x[j] - x[i]) + abs(y[j] - y[i]) + max(0, z[j] - z[i]));
    }
  }
  vector<vector<ll>> dp(1 << (n + 1), vector<ll>(n + 1, 1001001001001));
  dp[1][0] = 0;
  for(int bit = 0; bit < (1 << n); bit++) {
    for(int j = 0; j < n; j++) {
      if((bit >> j) & 1) {
        for(int k = 0; k < n; k++) {
          dp[bit | (1 << k)][k] =
              min(dp[bit | (1 << k)][k], dp[bit][j] + d[j][k]);
        }
      }
    }
  }
  ll ans = 1001001001001;
  for(int i = 0; i < n; i++) {
    ans = min(ans, dp[(1 << n) - 1][i] + d[i][0]);
  }
  cout << ans << endl;
  return 0;
}