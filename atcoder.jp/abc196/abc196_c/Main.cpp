#include <algorithm>
#include <atcoder/math>
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
using namespace atcoder;
using ll = long long;
ll MOD = 100000000007;
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
  ll n;
  cin >> n;
  ll ans = 0;
  for(ll i = 1; i < 1111100; i++) {
    ll tmp1 = i, tmp2 = i;
    ll cnt = 0;
    while(tmp1 > 0) {
      cnt++;
      tmp1 /= 10;
    }
    tmp1 = tmp2;
    tmp2 *= (ll)modpow(10, cnt);
    tmp2 += tmp1;
    if(tmp2 <= n) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}