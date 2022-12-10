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
  int n, k, d;
  cin >> n >> k >> d;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll dp[105][105][105];
  for(int i = 0; i < 105; i++) {
    for(int j = 0; j < 105; j++) {
      for(int l = 0; l < 105; l++) {
        dp[i][j][l] = -1;
      }
    }
  }
  for(int i = 0; i < 105; i++) {
    dp[i][0][0] = 0;
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < d; j++) {
      for(int l = 0; l <= k; l++) {
        dp[i + 1][j][l] = max(dp[i][j][l], dp[i + 1][j][l]);
        if(dp[i][j][l] >= 0) {
          dp[i + 1][(j + (a[i] % d)) % d][l + 1] =
              max(dp[i][j][l] + a[i], dp[i + 1][(j + (a[i] % d)) % d][l + 1]);
          // if(a[i] == 3) {
          //   cout << i << " " << j << " " << l << " ";
          // }
        }
      }
    }
  }
  // for(int i = 0; i <= n; i++) {
  //   for(int j = 0; j <= d; j++) {
  //     for(int l = 0; l <= k; l++) {
  //       cout << dp[i][j][l] << " ";
  //     }
  //     cout << ":";
  //   }
  //   cout << endl;
  // }
  cout << dp[n][0][k] << endl;
  return 0;
}