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
  int n, s;
  cin >> n >> s;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<vector<ll>> dp(n + 5, vector<ll>(10000, 0));
  dp[0][0] = 1;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j <= s; j++) {
      dp[i + 1][j] += 2 * dp[i][j];
      dp[i + 1][j] %= MOD;
      if(j + a[i] <= s) {
        dp[i + 1][j + a[i]] += dp[i][j];
        dp[i + 1][j + a[i]] %= MOD;
      }
    }
  }
  cout << dp[n][s] << endl;
  return 0;
}