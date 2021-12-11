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
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> a(m);
  vector<int> sum(n);
  dsu uf(n);
  bool ok = true;
  for(int i = 0; i < m; i++) {
    cin >> a[i].first >> a[i].second;
    a[i].first--, a[i].second--;
    sum[a[i].first]++;
    sum[a[i].second]++;
    if(uf.same(a[i].first, a[i].second)) {
      ok = false;
    } else {
      uf.merge(a[i].first, a[i].second);
    }
  }

  for(int i = 0; i < n; i++) {
    if(sum[i] >= 3) {
      cout << "No\n";
      return 0;
    }
  }

  if(ok) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }

  return 0;
}