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

const ll MOD = 998244353;
int main() {
  int n;
  cin >> n;
  vector<vector<ll>> dp(n, vector<ll>(9, 0));
  for(int i = 0; i < 9; i++) {
    dp[0][i] = 1;
  }
  for(int i = 0; i < n - 1; i++) {
    dp[i + 1][0] = dp[i][0] + dp[i][1];
    dp[i + 1][0] %= MOD;
    for(int j = 1; j < 8; j++) {
      dp[i + 1][j] = dp[i][j - 1] + dp[i][j] + dp[i][j + 1];
      dp[i + 1][j] %= MOD;
    }
    dp[i + 1][8] = dp[i][7] + dp[i][8];
    dp[i + 1][8] %= MOD;
  }
  ll ans = 0;
  for(int i = 0; i < 9; i++) {
    ans += dp[n - 1][i];
    ans %= MOD;
  }
  cout << ans << endl;

  return 0;
}