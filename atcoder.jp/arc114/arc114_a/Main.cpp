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
  ll ans = 624889782588491410;
  vector<ll> b = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
  for(int bit = 0; bit < (1 << b.size()); bit++) {
    bool ok = true;
    ll num = 1;
    for(int i = 0; i < b.size(); i++) {
      if((bit >> i) & 1) {
        num *= b[i];
      }
    }
    for(int i = 0; i < n; i++) {
      if(gcd(num, a[i]) == 1) {
        ok = false;
        break;
      }
    }
    if(ok) {
      ans = min(ans, num);
    }
  }
  cout << ans << endl;
  return 0;
}