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
  int n, m;
  cin >> n >> m;
  Dijkstra g1(n), g2(n);
  int s, t;
  cin >> s >> t;
  s--, t--;
  for(int i = 0; i < m; i++) {
    int x, y, d;
    cin >> x >> y >> d;
    x--, y--;
    g1.add_edge(x, y, d);
    g1.add_edge(y, x, d);
    g2.add_edge(x, y, d);
    g2.add_edge(y, x, d);
  }
  g1.calculate(s);
  g2.calculate(t);
  for(int i = 0; i < n; i++) {
    if(i == s || i == t) {
      continue;
    }
    if(g1.get_cost(i) == g2.get_cost(i) && g2.get_cost(i) != INF) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}