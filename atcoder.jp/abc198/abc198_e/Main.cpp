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
vector<int> seen, ans, c;
void dfs(const vector<vector<ll>> &g, vector<ll> &color, int v) {
  seen[v] = 1;
  if(color[c[v]] == 0) {
    ans.push_back(v);
  }
  color[c[v]]++;
  for(auto next_v : g[v]) {
    if(seen[next_v] == 1) {
      continue;
    }
    dfs(g, color, next_v);
  }
  color[c[v]]--;
}
int main() {
  int n;
  cin >> n;
  seen.resize(n);
  c.resize(n);
  for(int i = 0; i < n; i++) {
    cin >> c[i];
  }
  vector<vector<ll>> g(n);
  for(int i = 0; i < n - 1; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  vector<ll> color(100100, 0);
  dfs(g, color, 0);
  sort(ans.begin(), ans.end());
  for(const auto p : ans) {
    cout << p + 1 << '\n';
  }
  return 0;
}