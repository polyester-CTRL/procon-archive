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
  vector<string> vs(m);
  vector<ll> c(m);
  vector<ll> sum(1 << n, 1001001001);
  sum[0] = 0;
  for(int i = 0; i < m; i++) {
    cin >> vs[i] >> c[i];
    int s = 0;
    for(int j = 0; j < n; j++) {
      if(vs[i][j] == 'Y') {
        s += (1 << j);
      }
    }
    for(int bit = 0; bit < (1 << n); bit++) {
      sum[bit | s] = min(sum[bit | s], sum[bit] + c[i]);
    }
  }
  if(sum[(1 << (n)) - 1] >= 1001001001) {
    cout << -1 << endl;
  } else {
    cout << sum[(1 << (n)) - 1] << endl;
  }

  return 0;
}