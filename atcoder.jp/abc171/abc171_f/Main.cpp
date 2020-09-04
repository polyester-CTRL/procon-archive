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
const ll MOD = 1000000007;
const int MAX = 3100000;

ll fac[MAX], finv[MAX], inv[MAX];
// テーブルを作る前処理
void COMinit() {
  fac[0] = fac[1] = 1;
  finv[0] = finv[1] = 1;
  inv[1] = 1;
  for(int i = 2; i < MAX; i++) {
    fac[i] = fac[i - 1] * i % MOD;
    inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
    finv[i] = finv[i - 1] * inv[i] % MOD;
  }
}

// 二項係数計算
long long COM(int n, int k) {
  if(n < k)
    return 0;
  if(n < 0 || k < 0)
    return 0;
  return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}
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
  int k;
  string s;
  cin >> k >> s;
  int n = s.length();
  ll ans = 0;
  COMinit();
  for(int i = n - 1; i < n + k; i++) {
    int x = n + k - i - 1;
    ans += COM(n + k - x - 1, n - 1) * modpow(25, k - x) % MOD * modpow(26, x);
    ans %= MOD;
  }
  cout << ans << endl;
  return 0;
}