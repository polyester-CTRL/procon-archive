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
  if(u < 0) {
    u += m;
  }
  return u;
}
int main() {
  int t;
  cin >> t;
  while(t--) {
    ll n, s, k;
    cin >> n >> s >> k;
    ll d = gcd(n, gcd(s, k));
    ll x = -1;
    if(gcd(n / d, k / d) == 1) {
      x = s / d * modinv(n / d, k / d);
      x %= (k / d);
      if(x <= 0) {
        x += (k / d);
      }
    }
    if(x == -1) {
      cout << -1 << '\n';
    } else {
      cout << (n * x - s) / k << '\n';
    }
  }
  return 0;
}