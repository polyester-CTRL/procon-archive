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
  int n, m;
  ll d;
  cin >> n >> m >> d;
  vector<ll> a(n), b(m);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < m; i++) {
    cin >> b[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  ll ans = -1;
  for(int i = 0; i < n; i++) {
    auto itr1 = upper_bound(b.begin(), b.end(), a[i] + d);
    if(itr1 == b.begin()) {
      continue;
    }
    itr1--;
    // cout << *itr1 << endl;
    if(abs(a[i] - *itr1) > d) {
      continue;
    }
    ans = max(ans, a[i] + *itr1);
  }
  for(int i = 0; i < m; i++) {
    auto itr2 = upper_bound(a.begin(), a.end(), b[i] + d);
    if(itr2 == a.begin()) {
      continue;
    }
    itr2--;
    // cout << *itr2 << endl;
    if(abs(b[i] - *itr2) > d) {
      continue;
    }
    ans = max(ans, b[i] + *itr2);
  }
  cout << ans << endl;
  return 0;
}