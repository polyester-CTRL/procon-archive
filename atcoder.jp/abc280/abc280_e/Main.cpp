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
  if(u < 0)
    u += m;
  return u;
}
const ll MOD = 998244353;
int main() {
  int n;
  ll p;
  cin >> n >> p;
  vector<ll> a(n + 2, 0);
  a[0] = 0;
  ll inv = modinv(100, 998244353);
  for(int i = n - 1; i >= 0; i--) {
    a[i] += (a[i + 1] + 1) * (100 - p) % MOD * inv % MOD;
    a[i] %= MOD;
    a[i] += (a[i + 2] + 1) * p % MOD * inv % MOD;
    a[i] %= MOD;
    // for(int j = 0; j < n + 2; j++) {
    //   cout << a[j] << " ";
    // }
    // cout << endl;
  }
  cout << a[0] << endl;
  return 0;
}