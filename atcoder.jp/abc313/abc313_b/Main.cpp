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
  vector<pair<int, int>> a(m);
  vector<vector<int>> g(n);
  for(int i = 0; i < m; i++) {
    cin >> a[i].first >> a[i].second;
    a[i].first--, a[i].second--;
    g[a[i].first].push_back(a[i].second);
  }
  for(int i = 0; i < n; i++) {
    vector<int> check(n, 0);
    queue<int> que;
    int now = i;
    que.push(now);
    while(!que.empty()) {
      now = que.front();
      check[now] = 1;
      que.pop();
      for(auto p : g[now]) {
        if(check[p] == 1) {
          continue;
        }
        que.push(p);
      }
    }
    if(*min_element(check.begin(), check.end()) == 1) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;

  return 0;
}