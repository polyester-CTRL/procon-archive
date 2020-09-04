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
  vector<vector<int>> g(n);
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  queue<int> que;
  que.push(0);
  vector<int> ans(n, -1);
  vector<int> seen(n, 0);
  while(!que.empty()) {
    int f = que.front();
    que.pop();
    for(auto p : g[f]) {
      if(seen[p] != 0) {
        continue;
      }
      seen[p] = 1;
      ans[p] = f;
      que.push(p);
    }
  }
  cout << "Yes\n";
  for(int i = 1; i < n; i++) {
    cout << ans[i] + 1 << '\n';
  }
  return 0;
}