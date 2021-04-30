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
  ll m, n, s, tmp;
  cin >> m >> n >> s;
  ll ans = s;
  while((s / m) * n > 0) {
    tmp = (s / m) * n;
    ans += tmp;
    s %= m;
    s += tmp;
  }
  cout << ans << endl;
  return 0;
}