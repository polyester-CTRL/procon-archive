#include <algorithm>
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
  int n;
  ll l;
  cin >> n >> l;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  ll ans = 1001001001001;
  for(int i = 0; i < n; i++) {
    ll sum = 0;
    // for(int j = 0; j < n; j++) {
    //   cout << a[i] + a[j] << " " << (l - a[i]) + (l - a[j]) << endl;
    //   sum = max(a[i] + a[j], (l - a[i]) + (l - a[j])) * 2;
    //   // sum += max(a[j] + a[i], (l - a[j]) + (l - a[i]));
    //   ans = min(ans, sum);
    // }
    auto p = lower_bound(a.begin(), a.end(), l - a[i]);
    // cout << *p << endl;
    if(p != a.begin()) {
      p--;
      sum = max(a[i] + *p, l * 2 - (a[i] + *p)) * (ll)2;
      ans = min(ans, sum);
      p++;
    }
    sum = max(a[i] + *p, l * 2 - (a[i] + *p)) * (ll)2;
    ans = min(ans, sum);
    if(p++ != a.end() && p != a.end()) {
      // cout << *p << endl;
      sum = max(a[i] + *p, l * 2 - (a[i] + *p)) * (ll)2;
      ans = min(ans, sum);
      p--;
    }
  }
  cout << ans << endl;
  return 0;
}