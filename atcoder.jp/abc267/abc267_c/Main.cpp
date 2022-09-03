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
  ll n, m;
  cin >> n >> m;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll ans = -4 * 1e18;
  ll num = 0, minus = 0;
  for(ll i = 0; i < m; i++) {
    num += a[i] * (i + 1);
    minus += a[i];
  }
  ans = max(ans, num);
  for(ll i = m; i < n; i++) {
    num += a[i] * (m);
    num -= minus;
    ans = max(ans, num);
    minus -= a[i - m];
    minus += a[i];
  }
  cout << ans << endl;

  return 0;
}