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
  vector<vector<int>> graph(n);
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  int q;
  cin >> q;
  // for(int i = 0; i < n; i++) {
  //   cout << i << ": ";
  //   for(int j = 0; j < graph[i].size(); j++) {
  //     cout << graph[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  while(q--) {
    int x, k;
    cin >> x >> k;
    x--;
    int ans = 0;
    queue<pair<int, int>> que;
    vector<int> check;
    ans += (x + 1);
    check.push_back(x);
    que.push({x, 0});
    while(que.size() > 0) {
      auto now = que.front();
      que.pop();
      if(graph[now.first].size() == 0 || now.second > k - 1) {
        continue;
      }
      for(auto p : graph[now.first]) {
        bool seen = false;
        for(int i = 0; i < check.size(); i++) {
          if(check[i] == p) {
            seen = true;
          }
        }
        if(seen) {
          continue;
        }
        ans += (p + 1);
        check.push_back(p);
        que.push({p, now.second + 1});
      }
    }
    cout << ans << endl;
    check.clear();
    while(!que.empty()) {
      que.pop();
    }
  }
  return 0;
}