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
  for(int i = 0; i < n - 1; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  vector<int> ans(n, -1), seen(n, 0);
  priority_queue<int, vector<int>, greater<int>> que;
  que.push(0);
  seen[0] = 1;
  int cnt = 0;
  while(!que.empty()) {
    int c = que.top();
    que.pop();
    ans[cnt] = c;
    cnt++;
    for(auto p : g[c]) {
      if(seen[p] == 0) {
        que.push(p);
        seen[p] = 1;
      }
    }
  }
  for(int i = 0; i < n; i++) {
    cout << ans[i] + 1;
    if(i < n - 1) {
      cout << " ";
    }
  }
  cout << endl;
  return 0;
}