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
  ll l;
  int q;
  cin >> l >> q;
  vector<ll> c(q), x(q);
  map<ll, ll> mp;
  mp[0] = 0;
  mp[l] = l;
  for(int i = 0; i < q; i++) {
    cin >> c[i] >> x[i];
    if(c[i] == 1) {
      mp[x[i]] = x[i];
    } else {
      ll l, r;
      auto itr = mp.lower_bound(x[i]);
      r = (*itr).first;
      itr--;
      l = (*itr).first;
      cout << r - l << endl;
    }
  }

  return 0;
}