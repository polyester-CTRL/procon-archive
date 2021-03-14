#include <algorithm>
#include <atcoder/dsu>
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
using namespace atcoder;
using namespace std;
using ll = long long;
int main() {
  int n;
  cin >> n;
  vector<int> a(n + 10);
  dsu uf(n + 10);
  ll ans = 1;
  ll MOD = 998244353;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    a[i]--;
    if(i == a[i]) {
      uf.merge(n + 5, a[i]);
      ans *= 2;
      ans %= MOD;
    } else {
      uf.merge(i, a[i]);
    }
  }
  for(const auto p : uf.groups()) {
    vector<int> tmp(n + 10, 0);
    bool ok = true;
    if(uf.same(p[0], n + 5)) {
      continue;
    }
    if(p.size() == 1) {
      continue;
    }
    if(ok) {
      ans *= 2;
      ans %= MOD;
    }
  }
  cout << ans - 1 << endl;
  return 0;
}