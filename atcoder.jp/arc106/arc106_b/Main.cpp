#include <algorithm>
#include <atcoder/all>
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
  vector<ll> a(n), b(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n; i++) {
    cin >> b[i];
  }
  dsu uf(n);
  for(int i = 0; i < m; i++) {
    int c, d;
    cin >> c >> d;
    c--, d--;
    uf.merge(c, d);
  }
  vector<ll> sum0(n), sum1(n);
  for(int i = 0; i < n; i++) {
    sum0[uf.leader(i)] += a[i];
    sum1[uf.leader(i)] += b[i];
  }
  for(int i = 0; i < n; i++) {
    if(sum0[i] == sum1[i]) {
      continue;
    } else {
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";
  return 0;
}