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
  string s, t;
  cin >> s >> t;
  int m = s.length(), n = t.length();
  vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
  for(int i = 1; i <= m; i++) {
    for(int j = 1; j <= n; j++) {
      dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
      if(s[i - 1] == t[j - 1]) {
        dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
      }
    }
  }
  string ans = "";
  int x = m, y = n;
  while(x > 0 && y > 0) {
    if(s[x - 1] == t[y - 1]) {
      ans.push_back(s[x - 1]);
      x--, y--;
    } else if(dp[x][y] == dp[x - 1][y]) {
      x--;
    } else if(dp[x][y] == dp[x][y - 1]) {
      y--;
    }
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
  return 0;
}