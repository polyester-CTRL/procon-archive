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
  int n;
  cin >> n;
  vector<ll> a(n), p(n), x(n);
  ll ans = 1001001001;
  for(int i = 0; i < n; i++) {
    cin >> a[i] >> p[i] >> x[i];
    if(x[i] - a[i] > 0) {
      ans = min(ans, p[i]);
    }
  }
  if(ans != 1001001001) {
    cout << ans << endl;
  } else {
    cout << -1 << endl;
  }

  return 0;
}