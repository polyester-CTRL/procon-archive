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
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    a[i]--;
  }
  ll ans = 0;
  for(int i = 0; i < n; i += 2) {
    ans += (ll)(n - i) * (n - i - 1) / 2;
  }
  // cout << ans << endl;
  vector<vector<ll>> g(n);
  for(int i = 0; i < n; i++) {
    g[a[i]].push_back(i);
  }
  for(int i = 0; i < n; i++) {
    ll l = 0, r = g[i].size() - 1;
    while(l < r) {
      if(g[i][l] < n - g[i][r]) {
        ans -= (r - l) * (g[i][l] + 1);
        l++;
      } else {
        ans -= (r - l) * (n - g[i][r]);
        r--;
      }
    }
  }
  cout << ans << endl;
  return 0;
}