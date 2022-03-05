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
  int t;
  cin >> t;
  int n;
  string s;
  while(t--) {
    cin >> n >> s;
    vector<vector<ll>> dp(n + 1, vector<ll>(2, 0));
    dp[0][0] = (ll)(s[0] - 'A');
    dp[0][1] = 1;
    for(int i = 1; i < n; i++) {
      if(i < (n + 1) / 2) {
        dp[i][0] = dp[i - 1][0] * 26;
        dp[i][0] += (ll)(s[i] - 'A');
        dp[i][1] = dp[i - 1][1];
      } else {
        dp[i][0] = dp[i - 1][0];
        if(s[i] > s[n - 1 - i]) {
          dp[i][0] += dp[i - 1][1];
          dp[i][1] = 0;
        } else if(s[i] == s[n - 1 - i]) {
          dp[i][1] = dp[i - 1][1];
        } else {
          dp[i][1] = 0;
        }
      }
      // if(s[i] <= s[n - 1 - i]) {
      //   dp[i][1] = dp[i - 1][1];
      // } else {
      //   dp[i][1] = 0;
      // }
      // cout << dp[i][0] << " ";
      dp[i][0] %= MOD;
    }
    cout << (dp[n - 1][0] + dp[n - 1][1]) % MOD << '\n';
  }
  return 0;
}