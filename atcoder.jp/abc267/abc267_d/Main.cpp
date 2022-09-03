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
  ll n, m;
  cin >> n >> m;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, -4 * 1e18));
  dp[0][0] = 0;
  for(int i = 1; i <= n; i++) {
    for(int j = 0; j <= n; j++) {
      if(j == 0) {
        dp[i][0] = 0;
      } else if(i < j) {
        continue;
      } else {
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1] + a[i - 1] * (ll)j);
      }
    }
  }
  // for(int i = 0; i <= n; i++) {
  //   for(int j = 0; j <= n; j++) {
  //     cout << dp[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  cout << dp[n][m] << endl;
}