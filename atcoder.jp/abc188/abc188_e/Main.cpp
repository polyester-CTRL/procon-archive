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
  int n, m;
  cin >> n >> m;
  vector<pair<ll, ll>> a(n);
  vector<ll> b(n);
  vector<int> seen(n, 0);
  for(int i = 0; i < n; i++) {
    cin >> a[i].first;
    a[i].second = i;
    b[i] = a[i].first;
  }
  sort(a.begin(), a.end());
  vector<vector<int>> g(n);
  for(int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    x--, y--;
    g[x].push_back(y);
  }
  ll ans = -1001001001001;
  for(int i = 0; i < n; i++) {
    if(seen[a[i].second] != 0) {
      continue;
    }
    queue<int> que;
    que.push(a[i].second);
    ll mini = a[i].first;
    while(!que.empty()) {
      int now = que.front();
      que.pop();
      for(const auto &p : g[now]) {
        if(seen[p] != 0) {
          continue;
        }
        que.push(p);
        seen[p] = 1;
        ans = max(ans, b[p] - mini);
      }
    }
  }
  cout << ans << endl;

  return 0;
}