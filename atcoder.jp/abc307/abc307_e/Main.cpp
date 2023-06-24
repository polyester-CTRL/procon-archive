#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iomanip>
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
  ll n, m;
  cin >> n >> m;
  vector<vector<ll>> dp(n + 2, vector<ll>(2, 0));
  dp[0][0] = 0, dp[0][1] = m;
  for(int i = 0; i < n; i++) {
    dp[i + 1][0] = dp[i][0] * (m - 2) + dp[i][1] * (m - 1);
    dp[i + 1][0] %= MOD;
    dp[i + 1][1] = dp[i][0];
    dp[i + 1][1] %= MOD;
    // cout << dp[i][0] << " " << dp[i][1] << endl;
  }
  cout << (dp[n][1]) % MOD << endl;
  return 0;
}