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
  int n, q;
  cin >> n >> q;
  vector<int> a(q), b(q);
  dsu uf(n * 2 + 1);
  for(int i = 0; i < q; i++) {
    cin >> a[i] >> b[i];
    a[i]--, b[i]--;
    a[i] = a[i] * 2;
    b[i] = b[i] * 2 + 1;
    uf.merge(a[i], b[i]);
  }
  for(int i = 1; i < n; i++) {
    uf.merge(i * 2 - 1, i * 2);
  }
  if(uf.same(0, n * 2 - 1)) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }

  return 0;
}