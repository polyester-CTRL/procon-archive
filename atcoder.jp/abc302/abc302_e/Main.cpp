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
int main() {
  int n, q;
  cin >> n >> q;
  vector<set<int>> vs(n);
  int ans = n;
  while(q--) {
    int tmp;
    cin >> tmp;
    if(tmp == 1) {
      int u, v;
      cin >> u >> v;
      u--, v--;
      vs[u].insert(v);
      vs[v].insert(u);
      if(vs[u].size() == 1) {
        ans--;
      }
      if(vs[v].size() == 1) {
        ans--;
      }
    } else {
      int u;
      cin >> u;
      u--;
      for(auto p : vs[u]) {
        vs[p].erase(u);
        if(vs[p].size() == 0) {
          ans++;
        }
      }
      if(vs[u].size() >= 1) {
        ans++;
      }
      vs[u].clear();
    }
    cout << ans << endl;
  }
  return 0;
}