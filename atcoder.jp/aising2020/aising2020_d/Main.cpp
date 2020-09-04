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

ll modpow(ll x, ll n, ll MOD) {
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
int bin(int n) {
  int ans = 0;
  while(n > 0) {
    ans += n % 2;
    n /= 2;
  }
  return ans;
}
int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int mod = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == '1') {
      mod++;
    }
  }
  vector<ll> a(n, 0), b(n, 0);
  int num1 = 0, num2 = 0;
  for(int i = 0; i < n; i++) {
    a[i] = modpow(2, n - i - 1, mod + 1);
    if(mod > 1) {
      b[i] = modpow(2, n - i - 1, mod - 1);
    }
    if(s[i] == '1') {
      num1 += a[i];
      num1 %= (mod + 1);
      if(mod > 1) {
        num2 += b[i];
        num2 %= (mod - 1);
      }
    }
  }
  for(int i = 0; i < n; i++) {
    int tmp = 0;
    if(s[i] == '1') {
      if(mod == 1) {
        cout << 0 << '\n';
        continue;
      }
      tmp = num2 - b[i];
      if(tmp < 0) {
        tmp += (mod - 1);
      }
      tmp %= (mod - 1);
    } else {
      tmp = num1 + a[i];
      tmp %= (mod + 1);
    }
    int ans = 1;
    while(tmp > 0) {
      ans++;
      int pc = bin(tmp);
      tmp %= pc;
    }
    cout << ans << '\n';
  }
  return 0;
}