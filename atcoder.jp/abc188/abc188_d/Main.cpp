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
  int n;
  ll C;
  cin >> n >> C;
  vector<ll> a(n), b(n), c(n);
  map<ll, ll> mp;
  for(int i = 0; i < n; i++) {
    cin >> a[i] >> b[i] >> c[i];
    mp[a[i]] += c[i];
    mp[b[i] + 1] -= c[i];
  }

  vector<pair<ll, ll>> sum;
  for(const auto &p : mp) {
    if(sum.size() == 0) {
      sum.push_back({p.first, p.second});
    } else {
      auto tmp = sum[sum.size() - 1];
      sum.push_back({p.first, p.second + tmp.second});
    }
  }
  ll ans = 0;
  for(int i = 1; i < sum.size(); i++) {
    ans += min(sum[i - 1].second, C) * (sum[i].first - sum[i - 1].first);
  }
  cout << ans << endl;

  return 0;
}