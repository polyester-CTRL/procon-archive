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
vector<int> h(100), seen(100, 0), route(100, 0);
vector<vector<int>> g(100);
int dfs(int pre) {
  int res = 0;
  for(const auto &p : g[pre]) {
    if(seen[p] != 0) {
      continue;
    }
    seen[p] = 1;
    res += dfs(p);
  }
  if(h[pre] == 1) {
    res++;
  }
  route[pre] = res;
  return res;
}
int main() {
  int n, x;
  cin >> n >> x;
  x--;
  for(int i = 0; i < n; i++) {
    cin >> h[i];
  }
  h[x] = 0;
  for(int i = 0; i < n - 1; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  seen[x] = 1;
  dfs(x);
  int ans = 0;
  for(int i = 0; i < n; i++) {
    if(i == x) {
      continue;
    }
    if(route[i] > 0) {
      ans += 2;
    }
  }
  cout << ans << endl;
  return 0;
}