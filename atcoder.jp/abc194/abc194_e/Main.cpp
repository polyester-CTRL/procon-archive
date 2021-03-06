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
ll e() { return (ll)(1e9); }
ll op(ll a, ll b) { return min(a, b); }
int main() {
  int n, m;
  cin >> n >> m;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<ll> cnt(n + 10, 0);
  segtree<ll, op, e> seg(n + 10);
  for(int i = 0; i < m; i++) {
    cnt[a[i]]++;
    seg.set(a[i], a[i]);
  }
  int mex = -1;
  for(int i = 0; i < n + 10; i++) {
    if(cnt[i] == 0) {
      mex = i;
      seg.set(i, -n - 10 + i);
      break;
    }
  }
  ll ans = mex - n - 10;
  for(int i = 0; i < n - m; i++) {
    cnt[a[i]]--;
    if(cnt[a[i]] <= 0) {
      seg.set(a[i], -n - 10 + a[i]);
    }
    cnt[a[i + m]]++;
    seg.set(a[i + m], a[i]);
    ans = min(ans, seg.all_prod());
  }
  cout << ans + n + 10 << endl;
  return 0;
}