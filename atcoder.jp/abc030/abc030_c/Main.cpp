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
  ll x, y;
  cin >> x >> y;
  vector<ll> a(n), b(m);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < m; i++) {
    cin >> b[i];
  }
  int ans = 0;
  ll time = 0;
  while(true) {
    if(lower_bound(a.begin(), a.end(), time) != a.end()) {
      time = *lower_bound(a.begin(), a.end(), time) + x;
    } else {
      break;
    }
    if(lower_bound(b.begin(), b.end(), time) != b.end()) {
      time = *lower_bound(b.begin(), b.end(), time) + y;
      ans++;
    } else {
      break;
    }
  }
  cout << ans << endl;
  return 0;
}