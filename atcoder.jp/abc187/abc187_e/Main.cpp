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
  cin >> n;
  vector<vector<int>> g(n);
  vector<int> a(n), b(n);
  for(int i = 0; i < n - 1; i++) {
    cin >> a[i] >> b[i];
    a[i]--, b[i]--;
    g[a[i]].push_back(b[i]);
    g[b[i]].push_back(a[i]);
  }
  vector<int> depth(n, -1);
  queue<int> que;
  que.push(0);
  depth[0] = 0;
  while(!que.empty()) {
    int now = que.front();
    que.pop();
    for(const auto &p : g[now]) {
      if(depth[p] != -1) {
        continue;
      }
      depth[p] = depth[now] + 1;
      que.push(p);
    }
  }
  int q;
  cin >> q;
  ll root = 0;
  vector<ll> sum(n, 0);
  while(q--) {
    ll t, e, x;
    cin >> t >> e >> x;
    int start, bad;
    e--;
    if(t == 1) {
      start = a[e];
      bad = b[e];
    } else {
      start = b[e];
      bad = a[e];
    }
    if(depth[start] < depth[bad]) {
      sum[bad] -= x;
      root += x;
    } else {
      sum[start] += x;
    }
  }

  vector<ll> seen(n, 0), ans(n, 0);
  queue<pair<int, ll>> que1;
  que1.push({0, root});
  seen[0] = 1;
  while(!que1.empty()) {
    auto now = que1.front();
    que1.pop();
    ans[now.first] = now.second + sum[now.first];
    for(const auto &p : g[now.first]) {
      if(seen[p] != 0) {
        continue;
      }
      seen[p] = 1;
      que1.push({p, ans[now.first]});
    }
  }
  for(const auto &p : ans) {
    cout << p << '\n';
  }

  return 0;
}