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
  ll n, k;
  cin >> n >> k;
  ll ans = 0;
  for(ll i = 2; i <= n * 2; i++) {
    if(i - 2 < k) {
      continue;
    }
    if(i - 2 * n > k) {
      continue;
    }
    ll tmp = i - k;
    ans += min(2 * n - i + 1, i - 1) * min(2 * n - tmp + 1, tmp - 1);
  }
  cout << ans << endl;
  return 0;
}