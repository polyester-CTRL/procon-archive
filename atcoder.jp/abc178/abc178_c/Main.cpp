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
  ll n;
  cin >> n;
  ll ans = 1;
  ll num1 = 1, num2 = 1, num3 = 1;
  if(n < 2) {
    cout << 0 << endl;
    return 0;
  }
  for(int i = 0; i < n; i++) {
    ans *= 10;
    ans %= MOD;
    num1 *= 9;
    num1 %= MOD;
    num2 *= 8;
    num2 %= MOD;
  }
  ans -= num1;
  if(ans < 0) {
    ans += MOD;
  }
  ans -= num1;
  if(ans < 0) {
    ans += MOD;
  }
  ans += num2;
  ans %= MOD;
  cout << ans << endl;
  return 0;
}