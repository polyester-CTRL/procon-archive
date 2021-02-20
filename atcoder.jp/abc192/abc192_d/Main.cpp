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
  string x;
  ll m;
  cin >> x >> m;
  ll d = 0;
  int n = x.length();
  if(n == 1) {
    if((x[0] - '0') <= m) {
      cout << 1 << endl;
    } else {
      cout << 0 << endl;
    }
    return 0;
  }
  for(int i = 0; i < n; i++) {
    d = max(d, (ll)x[i] - '0');
  }
  bool ok = true;
  ll ans = 0;
  ll good = m + 10, bad = d;
  while(abs(good - bad) > 1) {
    ll mid = bad + (good - bad) / 2;
    ll num = 0;
    ok = true;
    for(int i = 0; i < n; i++) {
      if(num > m / mid) {
        ok = false;
        break;
      }
      num *= mid;
      num += (x[i] - '0');
    }
    if(ok && num <= m) {
      bad = mid;
    } else {
      good = mid;
    }
  }
  ans = max((ll)0, bad - d);
  cout << ans << endl;
  return 0;
}