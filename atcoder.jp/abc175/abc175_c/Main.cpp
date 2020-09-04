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
  ll x, k, d;
  cin >> x >> k >> d;
  if(x < 0) {
    x *= -1;
  }
  if(x / k >= d) {
    cout << x - k * d << endl;
  } else {
    ll num = x / d;
    k -= num;
    ll mini1 = x % d;
    ll mini2 = x % d - d;
    if(k % 2 == 0) {
      cout << mini1 << endl;
    } else {
      cout << abs(mini2) << endl;
    }
  }
  return 0;
}