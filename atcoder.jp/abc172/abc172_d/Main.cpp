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

ll func(ll n) {
  int ans = 0;
  for(int i = 1; i * i <= n; i++) {
    if(n % i == 0) {
      ans++;
      if(n / i != i) {
        ans++;
      }
    }
  }
  return ans;
}

int main() {
  ll n;
  cin >> n;
  ll ans = 0;
  vector<ll> dp(n + 10, 2);
  dp[1] = 1;
  for(int i = 1; i <= n; i++) {
    ll a, b, c;
    a = i;
    b = i;
    c = (n / i);
    ans += c * (2 * a + (c - 1) * b) / 2;
  }
  cout << ans << endl;
  return 0;
}