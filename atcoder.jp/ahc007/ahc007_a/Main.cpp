#include <algorithm>
#include <atcoder/dsu>
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
using namespace atcoder;
using ll = long long;
int main() {
  int n = 400, m = 1995;
  vector<int> x(n), y(n), u(m), v(m);
  for(int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  dsu uf(n);
  for(int i = 0; i < m; i++) {
    cin >> u[i] >> v[i];
  }
  vector<int> l(m);
  for(int i = 0; i < m; i++) {
    cin >> l[i];
    if(uf.same(u[i], v[i]) == false) {
      cout << 1 << endl;
      uf.merge(u[i], v[i]);
    } else {
      cout << 0 << endl;
    }
  }
  return 0;
}