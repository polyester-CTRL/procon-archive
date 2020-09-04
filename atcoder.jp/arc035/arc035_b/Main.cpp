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
const ll MOD = 1000000007;
int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  map<ll, ll> mp;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    mp[a[i]]++;
  }
  sort(a.begin(), a.end());
  ll sum = 0, now = 0;
  for(int i = 0; i < n; i++) {
    now += a[i];
    sum += now;
  }
  cout << sum << endl;
  ll ans = 1;
  for(auto &p : mp) {
    if(p.second <= 1) {
      continue;
    }
    ll tmp = p.second;
    while(tmp > 0) {
      ans *= tmp;
      ans %= MOD;
      tmp--;
    }
  }
  cout << ans << endl;
  return 0;
}