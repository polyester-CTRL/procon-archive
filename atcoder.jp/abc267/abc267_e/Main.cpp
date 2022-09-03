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
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<vector<int>> g(n);
  vector<ll> cost(n);
  for(int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    u--, v--;
    g[u].push_back(v);
    g[v].push_back(u);
    cost[u] += a[v];
    cost[v] += a[u];
  }
  priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
  for(int i = 0; i < n; i++) {
    pq.push({cost[i], i});
  }
  vector<bool> checked(n, false);
  ll ans = 0;
  while(!pq.empty()) {
    auto [c, x] = pq.top();
    pq.pop();
    if(checked[x]) {
      continue;
    }
    checked[x] = true;
    ans = max(ans, c);
    for(auto p : g[x]) {
      if(checked[p]) {
        continue;
      }
      cost[p] -= a[x];
      pq.push({cost[p], p});
    }
  }
  cout << ans << endl;
  return 0;
}