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
  vector<vector<pair<int, int>>> g(n);
  vector<int> ans(n, -1);
  dsu uf(n);
  for(int i = 0; i < m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    a--, b--, c--;
    if(!uf.same(a, b)) {
      uf.merge(a, b);
      g[a].push_back({b, c});
      g[b].push_back({a, c});
    }
  }

  vector<int> check(n, 0);
  for(int i = 0; i < g[0].size(); i++) {
    check[g[0][i].second] = 1;
  }
  for(int i = 0; i < n; i++) {
    if(check[i] == 0) {
      ans[0] = i;
    }
  }
  queue<int> que;
  que.push(0);
  while(!que.empty()) {
    int now = que.front();
    que.pop();
    for(int i = 0; i < g[now].size(); i++) {
      if(ans[g[now][i].first] == -1) {
        if(ans[now] != g[now][i].second) {
          ans[g[now][i].first] = g[now][i].second;
        } else {
          ans[g[now][i].first] = (g[now][i].second + 1) % n;
        }
        que.push(g[now][i].first);
      }
    }
  }
  for(const auto &p : ans) {
    cout << p + 1 << '\n';
  }
  return 0;
}