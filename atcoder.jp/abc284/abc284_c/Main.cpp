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
  atcoder::dsu uf(n);
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    uf.merge(a, b);
  }
  cout << uf.groups().size() << endl;
  return 0;
}