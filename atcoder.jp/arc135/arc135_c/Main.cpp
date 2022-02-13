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
  vector<ll> a(n);
  ll ans = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    ans += a[i];
  }
  vector<ll> bit(30, 0);
  for(int i = 0; i < n; i++) {
    for(ll j = 0; j < bit.size(); j++) {
      if(a[i] & (1 << j)) {
        bit[j]++;
      }
    }
  }
  for(int i = 0; i < n; i++) {
    ll num = 0;
    for(ll j = 0; j < bit.size(); j++) {
      if(a[i] & (1 << j)) {
        num += (n - bit[j]) * (1 << j);
      } else {
        num += bit[j] * (1 << j);
      }
    }
    ans = max(ans, num);
  }
  cout << ans << endl;

  return 0;
}