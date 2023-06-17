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
  cin >> n;
  vector<pair<int, ll>> x(n);
  for(int i = 0; i < n; i++) {
    cin >> x[i].first >> x[i].second;
  }
  vector<vector<ll>> dp(n + 1, vector<ll>(2, 0));
  for(int i = 0; i < n; i++) {
    if(x[i].first == 0) {
      dp[i + 1][0] =
          max({dp[i][0], dp[i][0] + x[i].second, dp[i][1] + +x[i].second});
      dp[i + 1][1] = dp[i][1];
    } else {
      dp[i + 1][0] = dp[i][0];
      dp[i + 1][1] = max(dp[i][1], dp[i][0] + x[i].second);
    }
  }
  cout << max(dp[n][0], dp[n][1]) << endl;
  return 0;
}