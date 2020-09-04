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
using Graph = vector<vector<int>>;

vector<bool> seen, finished;
int dfs(const Graph &g, int v, int pre) {
  int ret = 1;
  seen[v] = true;
  for(auto nextV : g[v]) {
    if(nextV == pre) {
      continue;
    }
    if(seen[nextV] == true && finished[nextV] == false) {
      ret = 0;
      return 0;
    }
    ret = min(ret, dfs(g, nextV, v));
  }
  finished[v] = true;
  return ret;
}

int main() {
  int n, m;
  cin >> n >> m;
  Graph g(n);
  seen.assign(n, false);
  finished.assign(n, false);
  for(int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    u--, v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  int ans = 0;
  for(int i = 0; i < n; i++) {
    if(seen[i] == true) {
      continue;
    }
    int num = dfs(g, i, -1);
    if(num == 1) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}