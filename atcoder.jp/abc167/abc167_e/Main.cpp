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
const ll MAX = 210000;
ll fac[MAX], finv[MAX], inv[MAX];

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

ll COM(ll n, ll k) {
  if(n < k)
    return 0;
  if(n < 0 || k < 0)
    return 0;
  return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main() {
  ll n, m, k;
  cin >> n >> m >> k;
  COMinit();
  ll cnt = m, ans = 0;
  for(int i = 0; i < n - k - 1; i++) {
    cnt *= (m - 1);
    cnt %= MOD;
  }

  for(int i = k; i >= 0; i--) {
    ans += cnt * COM(n - 1, i) % MOD;
    ans %= MOD;
    cnt *= (m - 1);
    cnt %= MOD;
  }
  cout << ans << endl;
  return 0;
}