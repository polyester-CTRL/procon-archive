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
  ll k;
  cin >> k;
  vector<pair<ll, ll>> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
  }
  ll ans = 0;
  sort(a.begin(), a.end());
  for(int i = 0; i < n; i++) {
    if(k - (a[i].first - ans) >= 0) {
      k -= (a[i].first - ans);
      k += a[i].second;
      ans = a[i].first;
    } else {
      break;
    }
  }
  if(k > 0) {
    ans += k;
  }
  cout << ans << endl;
  return 0;
}