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
  for(ll i = 0; i < n; i++) {
    ll a;
    cin >> a;
    ans += a * min({i + 1, k, n - k + 1, n - i});
  }
  cout << ans << endl;
  return 0;
}