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

struct Node {
  vector<int> edge_to;
  vector<int> edge_from;
  vector<ll> edge_cost;
  vector<ll> edge_from_cost;

  bool done;
  bool contain;
  ll cost;
};

int main() {
  ll n, m;
  cin >> n >> m;

  vector<Node> node(n);
  for(int i = 0; i < n; i++) {
    node[i].done = false;
    node[i].contain = false;
    node[i].cost = -1;
  }

  for(int i = 0; i < m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    a--;
    b--;
    node[a].edge_to.push_back(b);
    node[a].edge_cost.push_back(c);
    node[b].edge_to.push_back(a);
    node[b].edge_cost.push_back(c);
  }
  auto compare = [&](int a, int b) { return node[a].cost < node[b].cost; };
  priority_queue<int, vector<int>, decltype(compare)> q{compare};

  ll ans = 1001001001;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      node[j].done = false;
      node[j].contain = false;
      node[j].cost = -1;
    }

    node[i].contain = true;
    node[i].cost = 0;
    q.push(i);
    while(!q.empty()) {
      int doneNode = q.top();
      node[doneNode].contain = false;
      q.pop();
      node[doneNode].done = true;
      for(int j = 0; j < node[doneNode].edge_to.size(); j++) {
        ll to = node[doneNode].edge_to[j];
        ll cost = node[doneNode].cost + node[doneNode].edge_cost[j];
        if(node[to].cost < 0 || cost < node[to].cost) {
          node[to].cost = cost;
          if(node[to].contain == false) {
            node[to].contain = true;
            q.push(to);
          }
        }
      }
    }
    ll maxi = 0;
    for(int j = 0; j < n; j++) {
      maxi = max(maxi, node[j].cost);
    }
    ans = min(ans, maxi);
  }
  cout << ans << '\n';

  return 0;
}