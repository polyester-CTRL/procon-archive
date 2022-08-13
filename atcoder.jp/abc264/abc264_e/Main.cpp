#include <algorithm>
#include <atcoder/dsu>
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
  int n, m, e;
  cin >> n >> m >> e;
  vector<pair<int, int>> u(e);
  for(int i = 0; i < e; i++) {
    cin >> u[i].first >> u[i].second;
    u[i].first--, u[i].second--;
  }
  int q;
  cin >> q;
  vector<int> x(q), check(e, 0);
  for(int i = 0; i < q; i++) {
    cin >> x[i];
    x[i]--;
    check[x[i]] = 1;
  }
  reverse(x.begin(), x.end());
  vector<int> ans(q, 0);
  // vector<int> maxRoot(n, 0);
  atcoder::dsu uf(n + m + 10);
  for(int i = n; i < n + m - 1; i++) {
    uf.merge(i, i + 1);
    // maxRoot[i] = n + m;
  }
  for(int i = 0; i < e; i++) {
    if(check[i] == 1) {
      continue;
    }
    uf.merge(u[i].first, u[i].second);
    // maxRoot[uf.leader(u[i].first)] =
    //     max({maxRoot[uf.leader(u[i].first)], u[i].first, u[i].second});
  }
  for(int i = 0; i < q; i++) {
    ans[i] = uf.size(n);
    uf.merge(u[x[i]].first, u[x[i]].second);
  }
  reverse(ans.begin(), ans.end());
  for(int i = 0; i < q; i++) {
    cout << ans[i] - m << endl;
  }

  return 0;
}