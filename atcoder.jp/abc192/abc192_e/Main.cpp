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

#define INF 1001001001001001

struct edge {
  ll to, cost, time;
};
class Dijkstra {
private:
  ll V;
  vector<vector<edge>> G;
  vector<ll> D;

public:
  Dijkstra(ll n) { init(n); }
  void init(ll n) {
    V = n;
    G.resize(n);
    D.resize(n);
    for(ll i = 0; i < n; i++) {
      D[i] = INF;
    }
  }
  void add_edge(ll from, ll to, ll cost, ll time) {
    edge e;
    e.to = to;
    e.cost = cost;
    e.time = time;
    G[from].push_back(e);
  }
  ll get(ll to) { return D[to]; }
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
        if(D[e.to] > D[v] + e.cost + (e.time - D[v] % e.time) % e.time) {
          D[e.to] = D[v] + e.cost + (e.time - D[v] % e.time) % e.time;
          que.push({D[e.to], e.to});
        }
      }
    }
  }
};
int main() {
  int n, m, x, y;
  cin >> n >> m >> x >> y;
  x--, y--;
  vector<ll> a(m), b(m), t(m), k(m);
  Dijkstra g(n);
  for(int i = 0; i < m; i++) {
    cin >> a[i] >> b[i] >> t[i] >> k[i];
    a[i]--, b[i]--;
    g.add_edge(a[i], b[i], t[i], k[i]);
    g.add_edge(b[i], a[i], t[i], k[i]);
  }
  g.calculate(x);
  ll ans = g.get(y);
  if(ans == INF) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }

  return 0;
}