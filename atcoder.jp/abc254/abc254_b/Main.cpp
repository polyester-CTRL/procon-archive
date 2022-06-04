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
  vector<vector<int>> dp(n + 1);
  dp[0].push_back(1);
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < dp[i].size(); j++) {
      cout << dp[i][j] << " ";
    }
    cout << endl;
    dp[i + 1].push_back(1);
    for(int j = 1; j < dp[i].size(); j++) {
      dp[i + 1].push_back(dp[i][j - 1] + dp[i][j]);
    }
    dp[i + 1].push_back(1);
  }
  return 0;
}