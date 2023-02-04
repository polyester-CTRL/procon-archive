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
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  atcoder::dsu uf(n);
  int ans = 0;
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    g[a].push_back(b);
    g[b].push_back(a);
    if(uf.same(a, b)) {
      ans++;
    }
    uf.merge(a, b);
  }
  cout << ans << endl;

  return 0;
}