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
vector<vector<int>> g(200001);
ll ans = 0;
void dfs0(int n, map<int, int> &prev) {
  prev[n] = 1;
  ans++;
  // cout << n << endl;
  if(ans >= 1000000) {
    return;
  }
  for(int i = 0; i < g[n].size(); i++) {
    if(prev[g[n][i]] == 0) {
      dfs0(g[n][i], prev);
    }
  }
  prev[n] = 0;
}
void dfs(int n, map<int, int> prev) {
  prev[n] = 1;
  ans++;
  // cout << n << endl;
  if(ans >= 1000000) {
    return;
  }
  for(int i = 0; i < g[n].size(); i++) {
    if(prev[g[n][i]] == 0) {
      dfs(g[n][i], prev);
    }
  }
}
int main() {
  int n, m;
  cin >> n >> m;
  for(int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    u--, v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  map<int, int> prev, prev0;
  dfs0(0, prev0);
  // if(ans >= 1000000) {
  //   cout << 1000000 << endl;
  //   return 0;
  // } else {
  //   ans = 0;
  // }
  // dfs(0, prev);
  cout << min(ans, (ll)1000000) << endl;

  return 0;
}