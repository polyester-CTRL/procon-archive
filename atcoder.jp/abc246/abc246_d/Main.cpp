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
ll func(ll a, ll b) { return a * a * a + a * a * b + a * b * b + b * b * b; }
int main() {
  ll n;
  cin >> n;
  ll ans = 1000000000000000000;
  ll j = 1000000;
  for(ll i = 0; i * i * i <= n; i++) {
    while(func(i, j) >= n) {
      ll x = func(i, j);
      if(n <= x) {
        ans = min(ans, x);
      }
      j--;
    }
  }
  cout << ans << endl;
  return 0;
}