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
int main() {
  int n;
  string s;
  cin >> n >> s;
  vector<vector<ll>> dp(n, vector<ll>(2, 0));
  dp[0][(int)(s[0] - '0')] = 1;
  ll ans = dp[0][1];
  for(int i = 1; i < n; i++) {
    if(s[i] == '0') {
      dp[i][0] = 1;
      dp[i][1] = dp[i - 1][0] + dp[i - 1][1];
    } else {
      dp[i][0] = dp[i - 1][1];
      dp[i][1] = dp[i - 1][0] + 1;
    }
    ans += dp[i][1];
  }
  cout << ans << endl;

  return 0;
}