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
  int q;
  cin >> q;
  ll ans = 1;
  queue<ll> que;
  que.push(1);
  while(q--) {
    int a;
    cin >> a;
    if(a == 1) {
      ll x;
      cin >> x;
      que.push(x);
      ans *= 10;
      ans %= MOD;
      ans += x;
      ans %= MOD;
    } else if(a == 2) {
      ll x = que.front();
      que.pop();
      x *= modpow((ll)10, que.size());
      x %= MOD;
      ans -= x;
      if(ans < 0) {
        ans += MOD;
      }
    } else {
      cout << ans << endl;
    }
  }
  return 0;
}