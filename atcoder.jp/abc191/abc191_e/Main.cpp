#include <algorithm>
#include <climits>
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

#define INF 1001001001

struct edge {
  ll to, cost;
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
  void add_edge(ll from, ll to, ll cost) {
    edge e;
    e.to = to;
    e.cost = cost;
    G[from].push_back(e);
  }
  ll distance(ll n) { return D[n]; }
  void calculate(ll start) {
    for(ll i = 0; i < V; i++) {
      D[i] = INF;
    }
    D[start] = 0;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>>
        que;
    que.push({0, start});
    while(!que.empty()) {
      // for(int i = 0; i < D.size(); i++) {
      //   cout << D[i] << " ";
      // }
      // cout << endl;
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
};

int main() {
  int n, m;
  cin >> n >> m;
  Dijkstra g(n), g_rev(n);
  vector<ll> direct(n, INF);
  for(int i = 0; i < m; i++) {
    ll a, b, c;
    cin >> a >> b >> c;
    a--, b--;
    if(a == b) {
      direct[a] = min(direct[a], c);
    } else {
      g.add_edge(a, b, c);
      g_rev.add_edge(b, a, c);
    }
  }
  for(int i = 0; i < n; i++) {
    ll ans = INF;
    g.calculate(i);
    g_rev.calculate(i);
    for(int j = 0; j < n; j++) {
      if(i == j) {
        ans = min(ans, direct[i]);
      } else {
        ans = min(ans, g.distance(j) + g_rev.distance(j));
      }
    }
    if(ans < INF) {
      cout << ans << '\n';
    } else {
      cout << -1 << '\n';
    }
  }

  return 0;
}