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
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  ll mini = a[0];
  map<ll, ll> mp;
  for(int i = 0; i < n; i++) {
    for(ll j = 1; j * j <= a[i]; j++) {
      if(a[i] % j == 0) {
        if(mp[j] == 0) {
          mp[j] = a[i];
        } else {
          mp[j] = gcd(mp[j], a[i]);
        }
        if(mp[a[i] / j] == 0) {
          mp[a[i] / j] = a[i];
        } else {
          mp[a[i] / j] = gcd(mp[a[i] / j], a[i]);
        }
      }
    }
  }
  ll ans = 0;
  for(const auto &p : mp) {
    if(p.first > mini) {
      break;
    }
    // cout << p.first << " ";
    if(p.second == p.first) {
      ans++;
    }
  }
  cout << ans << endl;

  return 0;
}