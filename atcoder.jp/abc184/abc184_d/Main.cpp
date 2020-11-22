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
  double a, b, c;
  cin >> a >> b >> c;
  vector<vector<vector<double>>> dp(
      110, vector<vector<double>>(110, vector<double>(110, 0.0)));
  dp[a][b][c] = 1.0;
  for(int i = 0; i <= 100; i++) {
    for(int j = 0; j <= 100; j++) {
      for(int k = 0; k <= 100; k++) {
        if(i == 0 && j == 0 && k == 0) {
          continue;
        }
        dp[i + 1][j][k] += dp[i][j][k] * (double)i / (i + j + k);
        dp[i][j + 1][k] += dp[i][j][k] * (double)j / (i + j + k);
        dp[i][j][k + 1] += dp[i][j][k] * (double)k / (i + j + k);
      }
    }
  }
  double ans = 0;
  for(int i = 0; i < 100; i++) {
    for(int j = 0; j < 100; j++) {
      ans += dp[i][j][100] * (100 - c);
      ans += dp[i][100][j] * (100 - b);
      ans += dp[100][i][j] * (100 - a);
    }
  }
  printf("%.10f\n", ans);
  return 0;
}