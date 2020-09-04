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
#include<numeric>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

vector<bool> seen;
vector<int> x;
void dfs(const Graph &g, int v, int w) { 
  seen[v] = true;
  x[v] = w;
  for(auto next : g[v]) {
    if(seen[next] == true){
      continue;
    }
    dfs(g, next, w + x[next]);
  }
}

int main() {
  int n, q;
  cin >> n >> q;
  Graph g(n);
  seen.resize(n);
  x.resize(n);
  for(int i = 0; i < n - 1; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  x.assign(n, 0);
  for(int i = 0; i < q; i++) {
    int p;
    cin >> p;
    p--;
    int tmp;
    cin >> tmp;
    x[p] += tmp;
  }
  seen.assign(n, false);
  dfs(g, 0, x[0]);

  for(int i = 0; i < n; i++){
    cout << x[i] << ' ';
  }
  cout << endl;

  return 0;
}