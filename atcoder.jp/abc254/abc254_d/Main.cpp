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
  ll n;
  cin >> n;
  ll ans = 0;
  for(ll i = 1; i <= n; i++) {
    ll tmp = i;
    for(ll j = 2; j * j <= n; j++) {
      while(tmp % (j * j) == 0) {
        tmp /= (j * j);
      }
    }
    for(ll j = 1; tmp * j * j <= n; j++) {
      if(tmp * j * j <= n) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}