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

ll MOD = 998244353;
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
  int n;
  cin >> n;
  vector<int> a(n, 0), b(n, 0);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n; i++) {
    b[a[i]]++;
  }
  if(b[0] != 1 || a[0] != 0) {
    cout << 0 << endl;
    return 0;
  }
  ll ans = 1;
  for(int i = 1; i < n; i++) {
    ans *= modpow(b[i - 1], b[i]);
    ans %= MOD;
  }
  cout << ans << endl;

  return 0;
}