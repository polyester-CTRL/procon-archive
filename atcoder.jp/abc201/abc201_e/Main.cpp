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
#include <algorithm>
#include <queue>
#include <vector>
using ll = long long;
using namespace std;

const ll INF = 9000000006854775807;
const ll MOD = 1000000007;

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
        if(D[e.to] > D[v] ^ e.cost) {
          D[e.to] = D[v] ^ e.cost;
          que.push({D[e.to], e.to});
        }
      }
    }
  }
  ll get_cost(ll to) { return D[to]; }
};

int main() {
  int n;
  cin >> n;
  vector<vector<pair<ll, ll>>> g(n);
  for(int i = 0; i < n - 1; i++) {
    int u, v;
    ll w;
    cin >> u >> v >> w;
    u--, v--;
    g[u].push_back({v, w});
    g[v].push_back({u, w});
  }
  queue<pair<ll, ll>> que;
  vector<ll> seen(n, -1);
  que.push({0, 0});
  while(!que.empty()) {
    auto now = que.front();
    seen[now.first] = now.second;
    que.pop();
    for(auto p : g[now.first]) {
      if(seen[p.first] != -1) {
        continue;
      }
      que.push({p.first, p.second ^ now.second});
    }
  }
  ll res = 0;
  ll two_factor = 1;
  for(int d = 0; d < 60; ++d) {
    ll even = 0, odd = 0;
    for(int i = 0; i < n; ++i) {
      if(seen[i] & (1LL << d))
        ++odd;
      else
        ++even;
    }
    ll add = (odd * even) % MOD * two_factor % MOD;
    res = (res + add) % MOD;
    two_factor = (two_factor * 2) % MOD;
  }
  cout << res << endl;
  return 0;
}