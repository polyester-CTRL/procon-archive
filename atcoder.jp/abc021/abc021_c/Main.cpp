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
  const ll MOD = 1'000'000'007;
  int n, a, b;
  cin >> n >> a >> b;
  a--, b--;
  int m;
  cin >> m;
  vector<vector<int>> g(n);
  for(int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    x--, y--;
    g[x].push_back(y);
    g[y].push_back(x);
  }
  vector<ll> ans(n, 0);
  vector<int> mini(n, 1001001001);
  queue<int> que;
  que.push(a);
  ans[a] = 1;
  mini[a] = 0;
  while(!que.empty()) {
    int now = que.front();
    que.pop();
    for(const auto &p : g[now]) {
      if(ans[p] == 0) {
        ans[p] += ans[now];
        ans[p] %= MOD;
        mini[p] = mini[now] + 1;
        que.push(p);
      } else if(mini[p] == mini[now] + 1) {
        ans[p] += ans[now];
        ans[p] %= MOD;
      }
    }
  }
  cout << ans[b] << endl;
  return 0;
}