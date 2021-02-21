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
ll MOD = 10;
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
  ll a, b, c;
  cin >> a >> b >> c;
  a %= 10;
  if(a <= 1) {
    cout << a << endl;
    return 0;
  } else if(a == 2) {
    MOD = 4;
  } else if(a == 3) {
    MOD = 4;
  } else if(a == 4) {
    MOD = 2;
  } else if(a == 5 || a == 6) {
    cout << a << endl;
    return 0;
  } else if(a == 7) {
    MOD = 4;
  } else if(a == 8) {
    MOD = 4;
  } else if(a == 9) {
    MOD = 2;
  }
  b = modpow(b, c);
  if(b == 0) {
    b = MOD;
  }
  MOD = 10;
  a = modpow(a, b);
  cout << a << endl;
  return 0;
}