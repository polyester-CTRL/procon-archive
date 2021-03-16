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
int main() {
  ll n, m;
  cin >> n >> m;
  vector<ll> a(n), sum(n + 10, 0);
  map<ll, ll> mp;
  ll ans = 0;
  mp[0]++;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    sum[i + 1] = sum[i] + a[i];
    sum[i + 1] %= m;
    mp[sum[i + 1]]++;
  }
  for(const auto &p : mp) {
    ans += (p.second - 1) * p.second / 2;
  }

  cout << ans << endl;
  return 0;
}