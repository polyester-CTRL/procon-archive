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
  vector<int> seen(n, -1);
  vector<int> a(n), b(n);
  for(int i = 0; i < n - 1; i++) {
    cin >> a[i] >> b[i];
    a[i]--, b[i]--;
    g[a[i]].push_back(b[i]);
    g[b[i]].push_back(a[i]);
  }
  queue<pair<int, int>> que;
  que.push({0, 0});
  seen[0] = 0;

  int maxi = 0;
  map<pair<int, int>, int> mp;
  while(!que.empty()) {
    auto tmp = que.front();
    que.pop();
    int t = 1, skip = tmp.second;
    for(auto p : g[tmp.first]) {
      if(seen[p] == -1) {
        if(t == skip) {
          t++;
        }
        seen[p] = t;
        que.push({p, t});
        mp[{tmp.first, p}] = t;
        mp[{p, tmp.first}] = t;
        maxi = max(maxi, t);
        t++;
      }
    }
  }
  cout << maxi << '\n';
  for(int i = 0; i < n - 1; i++) {
    cout << mp[{a[i], b[i]}] << '\n';
  }
  return 0;
}