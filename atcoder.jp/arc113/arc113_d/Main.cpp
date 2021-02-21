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
  ll h, w, k;
  cin >> h >> w >> k;
  if(h == 1) {
    cout << modpow(k, w) << endl;
    return 0;
  } else if(w == 1) {
    cout << modpow(k, h) << endl;
    return 0;
  }
  ll ans = 0;
  for(int i = 1; i <= k; i++) {
    ans += (modpow(i, h) - modpow(i - 1, h)) * modpow(k - i + 1, w) % MOD;
    ans %= MOD;
    if(ans < 0) {
      ans += MOD;
    }
  }
  cout << ans << endl;
  return 0;
}