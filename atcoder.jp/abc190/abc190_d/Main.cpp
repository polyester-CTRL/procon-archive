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
  ll ans = 2;
  for(ll i = 2; i * i / 10 <= n; i++) {
    if((n - i * (i - 1) / 2) % i == 0 && (n - i * (i - 1) / 2) > 0) {
      ans += 2;
    }
  }
  cout << ans << endl;
  return 0;
}