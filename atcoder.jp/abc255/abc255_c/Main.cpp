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
  ll x, a, d, n;
  cin >> x >> a >> d >> n;
  if(d == 0) {
    cout << abs(x - a) << endl;
  } else if(d > 0) {
    if(x < a) {
      cout << a - x << endl;
    } else if(x >= a && x <= a + d * (n - 1)) {
      x -= a;
      cout << min(x % d, d - x % d) << endl;
    } else {
      cout << x - (a + d * (n - 1)) << endl;
    }
  } else {
    if(x > a) {
      cout << x - a << endl;
    } else if(x >= a + d * (n - 1) && x <= a) {
      x -= a;
      x = abs(x);
      d = abs(d);
      cout << min(x % d, d - x % d) << endl;
    } else {
      cout << -(x - (a + d * (n - 1))) << endl;
    }
  }
  return 0;
}