#include <algorithm>
#include <atcoder/math>
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
using namespace atcoder;
int main() {
  int t;
  cin >> t;
  while(t--) {
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    ll n = (x + y) * 2;
    ll m = a + b;
    ll ans = 1001001001001001001;
    for(ll i = x; i < x + y; i++) {
      for(ll j = a; j < a + b; j++) {
        vector<ll> tmp1 = {i, j};
        vector<ll> tmp2 = {n, m};
        auto p = crt(tmp1, tmp2);
        if(p.first == 0) {
          continue;
        }
        // cout << p.first << " " << p.second << endl;
        if(p.first < 0) {
          p.first += p.second;
        }
        p.first %= p.second;
        ans = min(ans, p.first);
      }
    }
    if(ans == 1001001001001001001) {
      cout << "infinity\n";
    } else {
      cout << ans << '\n';
    }
  }
  return 0;
}