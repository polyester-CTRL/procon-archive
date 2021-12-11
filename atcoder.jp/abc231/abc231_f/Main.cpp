#include <algorithm>
#include <atcoder/segtree>
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
using namespace atcoder;
using ll = long long;
ll op(ll l, ll r) { return l + r; }
ll e() { return (ll)0; }
int main() {
  int n;
  cin >> n;
  vector<pair<ll, ll>> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i].first;
  }
  for(int i = 0; i < n; i++) {
    cin >> a[i].second;
  }
  sort(a.begin(), a.end(), [](auto const &lhs, auto const &rhs) {
    if(lhs.first != rhs.first) {
      return lhs.first < rhs.first;
    } else {
      return lhs.second > rhs.second;
    }
  });
  map<ll, ll> mp;
  for(int i = 0; i < n; i++) {
    mp[a[i].second]++;
  }
  int idx = 0;
  for(auto &p : mp) {
    p.second = idx;
    idx++;
  }
  segtree<ll, op, e> seg(n);
  ll ans = 0;
  for(int i = 0; i < n; i++) {
    ll cnt = 1;
    while(i + 1 < n && a[i] == a[i + 1]) {
      i++;
      cnt++;
    }
    seg.set(mp[a[i].second], seg.get(mp[a[i].second]) + cnt);
    ans += cnt * (seg.prod(mp[a[i].second], n));
  }
  cout << ans << endl;

  return 0;
}