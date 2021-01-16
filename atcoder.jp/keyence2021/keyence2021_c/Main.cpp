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
ll modpow(ll x, ll n) {
  ll ans = 1;
  while(n > 0) {
    if(n % 2 == 1) {
      ans *= x;
      ans %= MOD;
    }
    x *= x;
    x %= MOD;
    n >>= 1;
  }
  return ans;
}
int main() {
  int h, w, k;
  cin >> h >> w >> k;
  vector<vector<char>> s(h + 10, vector<char>(w + 10, 'F'));
  vector<vector<ll>> dp(h + 10, vector<ll>(w + 10, 0));
  for(int i = 0; i < k; i++) {
    int x, y;
    char c;
    cin >> x >> y >> c;
    x--, y--;
    s[x][y] = c;
  }
  dp[0][0] = modpow(3, h * w - k);
  const ll MOD3 = 332748118;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(i == h - 1 && j == w - 1) {
        continue;
      }
      if(s[i][j] == 'X') {
        dp[i + 1][j] += dp[i][j];
        dp[i][j + 1] += dp[i][j];
      } else if(s[i][j] == 'R') {
        dp[i][j + 1] += dp[i][j];
      } else if(s[i][j] == 'D') {
        dp[i + 1][j] += dp[i][j];
      } else {
        dp[i + 1][j] += dp[i][j] * 2 % MOD * MOD3 % MOD;
        dp[i][j + 1] += dp[i][j] * 2 % MOD * MOD3 % MOD;
      }
      dp[i + 1][j] %= MOD;
      dp[i][j + 1] %= MOD;
    }
  }

  cout << dp[h - 1][w - 1] << endl;

  return 0;
}