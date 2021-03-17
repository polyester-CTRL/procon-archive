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
  vector<int> a(m), b(m);
  vector<vector<int>> c(m);
  for(int i = 0; i < m; i++) {
    cin >> a[i] >> b[i];
    for(int j = 0; j < b[i]; j++) {
      int tmp;
      cin >> tmp;
      tmp--;
      c[i].push_back(tmp);
    }
  }
  vector<ll> dp((1 << n), 1001001001);
  dp[0] = 0;
  for(int bit = 0; bit < (1 << n); bit++) {
    for(int i = 0; i < m; i++) {
      ll num = 0;
      for(int j = 0; j < b[i]; j++) {
        num += (1 << c[i][j]);
      }
      dp[bit | num] = min(dp[bit | num], dp[bit] + a[i]);
    }
  }
  ll ans = dp[(1 << n) - 1];
  if(ans == 1001001001) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}