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
  vector<vector<int>> list(n);

  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    list[a].push_back(b);
    list[b].push_back(a);
  }
  for(int i = 0; i < n; i++) {
    vector<int> check(n, 0);
    for(const auto &p : list[i]) {
      for(int k = 0; k < list[p].size(); k++) {
        check[list[p][k]] = 1;
      }
    }
    for(const auto &p : list[i]) {
      check[p] = 0;
    }
    check[i] = 0;
    int ans = 0;
    for(int j = 0; j < n; j++) {
      ans += check[j];
    }
    cout << ans << endl;
  }
  return 0;
}