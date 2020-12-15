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
  int n;
  string s;
  cin >> n >> s;
  int maxi = 0;
  for(int i = 1; i < n; i++) {
    string tmpS, tmpT;
    tmpS = s.substr(0, i);
    tmpT = s.substr(i, n - i);
    vector<vector<int>> dp(i + 1, vector<int>(n - i + 1, 0));
    for(int j = 1; j <= i; j++) {
      for(int k = 1; k <= n - i; k++) {
        dp[j][k] = max(dp[j][k - 1], dp[j - 1][k]);
        if(tmpS[j - 1] == tmpT[k - 1]) {
          dp[j][k] = max(dp[j][k], dp[j - 1][k - 1] + 1);
        }
      }
    }
    maxi = max(maxi, dp[i][n - i]);
  }
  cout << n - 2 * maxi << endl;
  return 0;
}