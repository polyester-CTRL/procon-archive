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
  vector<ll> c(n);
  for(int i = 0; i < n - 1; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  for(int i = 0; i < n; i++) {
    cin >> c[i];
  }
  sort(c.rbegin(), c.rend());
  queue<int> que;
  que.push(0);
  vector<ll> ans(n), seen(n, 0);
  int cnt = 0;
  while(!que.empty()) {
    int now = que.front();
    que.pop();
    ans[now] = c[cnt];
    cnt++;
    seen[now] = 1;
    for(const auto &p : g[now]) {
      if(seen[p] != 0) {
        continue;
      }
      que.push(p);
    }
  }
  ll sum = 0;
  for(int i = 1; i < n; i++) {
    sum += c[i];
  }
  cout << sum << endl;
  for(const auto &p : ans) {
    cout << p << " ";
  }
  cout << endl;
  return 0;
}