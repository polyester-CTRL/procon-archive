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
  ll n;
  cin >> n;
  vector<ll> ans;
  for(ll i = max(n - 162, (ll)0); i <= n; i++) {
    ll tmp = 0;
    ll num = i;
    while(num > 0) {
      tmp += num % 10;
      num /= 10;
    }
    if(i + tmp == n) {
      ans.push_back(i);
    }
  }
  cout << ans.size() << '\n';
  for(const auto &p : ans) {
    cout << p << '\n';
  }
  return 0;
}