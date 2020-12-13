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
  int n, m;
  cin >> n >> m;
  vector<ll> a(n), b(m);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < m; i++) {
    cin >> b[i];
  }
  vector<vector<int>> dp(n + 5, vector<int>(m + 5, 0));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(i == 0 && j != 0) {
        dp[i][j] = min((a[i] != b[j]) + max(i, j), dp[i][j - 1] + 1);
      } else if(i != 0 && j == 0) {
        dp[i][j] = min((a[i] != b[j]) + max(i, j), dp[i - 1][j] + 1);
      } else if(i + j == 0) {
        dp[i][j] = (a[i] != b[j]);
      } else {
        dp[i][j] = min({dp[i - 1][j] + 1, dp[i][j - 1] + 1,
                        dp[i - 1][j - 1] + (a[i] != b[j])});
      }
    }
  }
  cout << dp[n - 1][m - 1] << endl;
  return 0;
}