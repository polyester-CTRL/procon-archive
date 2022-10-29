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
const ll MOD = 998244353;
ll modinv(ll a, ll m) {
  ll b = m, u = 1, v = 0;
  while(b) {
    ll t = a / b;
    a -= t * b;
    swap(a, b);
    u -= t * v;
    swap(u, v);
  }
  u %= m;
  if(u < 0)
    u += m;
  return u;
}

int main() {
  ll n, m, k;
  cin >> n >> m >> k;
  vector<vector<ll>> dp(k + 1, vector<ll>(n + 1, 0));
  dp[0][0] = 1;
  ll inv = modinv(m, MOD);
  for(int i = 0; i < k; i++) {
    for(int j = 0; j < n; j++) {
      for(int r = 1; r <= m; r++) {
        int t = r + j;
        if(t > n) {
          t = n - (t - n);
        }
        dp[i + 1][t] += dp[i][j] * inv % MOD;
        dp[i + 1][t] %= MOD;
      }
    }
  }
  ll sum = 0;
  for(int i = 0; i <= k; i++) {
    sum += dp[i][n];
    sum %= MOD;
  }
  cout << sum << endl;

  return 0;
}