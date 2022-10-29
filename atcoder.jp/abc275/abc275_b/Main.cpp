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
  const ll MOD = 998244353;
  ll a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  ll ans = ((a % MOD) * (b % MOD)) % MOD * (c % MOD) % MOD;
  ans -= ((d % MOD) * (e % MOD)) % MOD * (f % MOD) % MOD;
  if(ans < 0) {
    ans += MOD;
  }
  cout << ans << endl;

  return 0;
}