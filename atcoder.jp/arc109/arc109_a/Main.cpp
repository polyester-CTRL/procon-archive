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
  int a, b, x, y;
  cin >> a >> b >> x >> y;
  a--, b--;
  int ans = 0;
  if(a < b) {
    ans = min((b - a) * x * 2 + x, (b - a) * y + x);
  } else if(a == b) {
    ans = x;
  } else {
    ans = min((a - b) * x * 2 - x, (a - b - 1) * y + x);
  }
  cout << ans << endl;
  return 0;
}