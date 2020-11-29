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
// R=0, S=1, P=2
int main() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    if(s[i] == 'R') {
      a[i] = 0;
    } else if(s[i] == 'S') {
      a[i] = 1;
    } else {
      a[i] = 2;
    }
  }
  vector<vector<int>> dp(k + 1, vector<int>(n + 1, 0));
  for(int i = 0; i < n; i++) {
    dp[0][i] = a[i];
  }
  for(int i = 0; i < k; i++) {
    for(int j = 0; j < n; j++) {
      if(dp[i][(2 * j) % n] == dp[i][(2 * j + 1) % n]) {
        dp[i + 1][j] = dp[i][(2 * j + 1) % n];
      } else {
        dp[i + 1][j] =
            (((3 ^ dp[i][(2 * j) % n] ^ dp[i][(2 * j + 1) % n]) + 1) % 3);
      }
    }
  }
  int ans = dp[k][0];
  if(ans == 0) {
    cout << "R\n";
  } else if(ans == 1) {
    cout << "S\n";
  } else {
    cout << "P\n";
  }
  return 0;
}