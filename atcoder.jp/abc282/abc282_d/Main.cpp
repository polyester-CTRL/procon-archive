#include <algorithm>
#include <atcoder/dsu>
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
  ll n, m;
  cin >> n >> m;
  vector<pair<ll, ll>> u(m);
  vector<vector<ll>> g(n);
  atcoder::dsu uf(n);
  for(int i = 0; i < m; i++) {
    cin >> u[i].first >> u[i].second;
    u[i].first--, u[i].second--;
    g[u[i].first].push_back(u[i].second);
    g[u[i].second].push_back(u[i].first);
    uf.merge(u[i].first, u[i].second);
  }
  if(m == 0) {
    cout << n * (n - 1) / 2 << endl;
    return 0;
  }
  int start = u[0].first;
  vector<int> seen(n, -1);
  vector<int> black(n, 0);
  bool check = true;
  for(auto gl : uf.groups()) {
    queue<int> que;
    start = gl[0];
    que.push(start);
    seen[start] = 1;
    ll one = 1;
    while(!que.empty()) {
      int now = que.front();
      que.pop();
      for(auto p : g[now]) {
        if(seen[p] == -1) {
          seen[p] = seen[now] ^ 1;
          if(seen[p] == 1) {
            one++;
          }
          que.push(p);
        } else if(seen[p] == seen[now]) {
          check = false;
          break;
        }
      }
    }
    black[uf.leader(start)] = one;
  }
  if(check == false) {
    cout << 0 << endl;
    return 0;
  }
  ll ans = 0;
  for(int i = 0; i < n; i++) {
    if(g[i].size() == 0) {
      ans += n - 1;
    } else if(seen[i] == 0) {
      ans += (ll)(black[uf.leader(i)] - g[i].size()) + (n - uf.size(i));
    } else {
      ans += (ll)(uf.size(i) - black[uf.leader(i)] - g[i].size()) + (n - uf.size(i));
    }
  }
  cout << ans / 2 << endl;

  return 0;
}