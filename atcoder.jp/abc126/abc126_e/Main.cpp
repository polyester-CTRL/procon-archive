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
  int n, m;
  cin >> n >> m;
  dsu uf(n);
  for(int i = 0; i < m; i++) {
    int x, y, z;
    cin >> x >> y >> z;
    x--, y--;
    uf.merge(x, y);
  }
  cout << uf.groups().size() << endl;
  return 0;
}