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
  map<ll, ll> mp;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    a[i] *= -1;
  }
  for(int i = 0; i < n; i++) {
    auto itr = mp.upper_bound(a[i]);
    if(itr == mp.end()) {
      mp[a[i]]++;
    } else {
      if((*itr).second > 1) {
        (*itr).second--;
      } else {
        mp.erase(itr);
      }
      mp[a[i]]++;
    }
  }
  int ans = 0;
  for(const auto &p : mp) {
    ans += p.second;
  }
  cout << ans << endl;
  return 0;
}