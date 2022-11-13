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

const ll INF = 1001001001;

struct edge {
  ll to, cost;
};
class Dijkstra {
private:
  ll V;
  vector<vector<edge>> G;
  vector<ll> D;
  void init(ll n) {
    V = n;
    G.resize(n);
    D.resize(n);
    for(ll i = 0; i < n; i++) {
      D[i] = INF;
    }
  }

public:
  Dijkstra(ll n) { init(n); }
  void add_edge(ll from, ll to, ll cost) {
    edge e;
    e.to = to;
    e.cost = cost;
    G[from].push_back(e);
  }
  void calculate(ll start) {
    for(ll i = 0; i < V; i++) {
      D[i] = INF;
    }
    D[start] = 0;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>>
        que;
    que.push({0, start});
    while(!que.empty()) {
      auto p = que.top();
      que.pop();
      ll v = p.second;
      if(D[v] < p.first) {
        continue;
      }
      for(auto e : G[v]) {
        if(D[e.to] > D[v] + e.cost) {
          D[e.to] = D[v] + e.cost;
          que.push({D[e.to], e.to});
        }
      }
    }
  }
  ll get_cost(ll to) { return D[to]; }
};

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  Dijkstra g(n * 2 + 1);
  for(int i = 0; i < m; i++) {
    int u, v, a;
    cin >> u >> v >> a;
    u--, v--;
    if(a == 1) {
      g.add_edge(u, v, 1);
      g.add_edge(v, u, 1);
    } else {
      g.add_edge(u + n, v + n, 1);
      g.add_edge(v + n, u + n, 1);
    }
  }
  for(int i = 0; i < k; i++) {
    int s;
    cin >> s;
    s--;
    g.add_edge(s, s + n, 0);
    g.add_edge(s + n, s, 0);
  }
  g.calculate(0);
  ll ans = min(g.get_cost(n - 1), g.get_cost(n - 1 + n));
  if(ans == INF) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}