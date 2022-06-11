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
  cin >> n >> m;
  vector<ll> s(n), x(m), a(n, 0);
  for(int i = 0; i < n - 1; i++) {
    cin >> s[i];
  }
  for(int i = 0; i < m; i++) {
    cin >> x[i];
  }
  for(int i = 0; i < n - 1; i++) {
    a[i + 1] = s[i] - a[i];
  }
  map<ll, ll> mp;
  for(int i = 0; i < n; i++) {
    // cout << a[i] << " ";
    for(int j = 0; j < m; j++) {
      if(i % 2 == 0) {
        mp[a[i] - x[j]]++;
      } else {
        mp[x[j] - a[i]]++;
      }
    }
  }
  // cout << endl;
  ll ans = 0;
  for(auto p : mp) {
    ans = max(ans, p.second);
  }
  cout << ans << endl;
  return 0;
}