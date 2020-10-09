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
int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  vector<int> c;
  for(int i = 1; i < n; i++) {
    c.push_back(i);
  }
  int ans = 0;
  do {
    int now = 0;
    for(const auto &p1 : c) {
      bool ok = false;
      for(const auto &p2 : g[now]) {
        if(p2 == p1) {
          ok = true;
          now = p1;
          break;
        }
      }
      if(ok == false) {
        now = -1;
        break;
      }
    }
    if(now != -1) {
      ans++;
    }
  } while(next_permutation(c.begin(), c.end()));
  cout << ans << endl;
  return 0;
}