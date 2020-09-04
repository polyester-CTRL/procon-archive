#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
#include<string>
#include<cmath>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<cstdio>
using namespace std;
using ll = long long;

#define INF 1e+12
#define MAX_V 100000
struct edge{
  ll to;
  ll cost;
};
// <最短距離, 頂点の番号>
using P = pair<ll, ll>;

vector<edge> G[MAX_V];
ll depth[MAX_V];
void dfs(int v, int p, ll d){
  depth[v] = d;
  for(auto &i : G[v]){
    if(i.to == p){
      continue;
    }
    dfs(i.to, v, d + i.cost);
  }
}

int main() {
  int n;
  cin >> n;

  for(int i = 0; i < n - 1; i++){
    int a, b, c;
    cin >> a >> b >> c;
    a--;
    b--;
    edge e = {b, c};
    G[a].push_back(e);
    e = {a, c};
    G[b].push_back(e);
  }
  int q, k;
  cin >> q >> k;
  k--;
  dfs(k, -1, 0);

  vector<int> x(q), y(q);
  for(int i = 0; i < q; i++){
    cin >> x[i] >> y[i];
    x[i]--;
    y[i]--;
  }
  for(int i = 0; i < q; i++){
    cout << depth[x[i]] + depth[y[i]] << '\n';
  }
  return 0;
}