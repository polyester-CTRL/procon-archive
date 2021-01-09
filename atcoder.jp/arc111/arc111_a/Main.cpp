#include <algorithm>
#include <atcoder/math>
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
using namespace atcoder;
using ll = long long;

int main() {
  ll n, m;
  cin >> n >> m;
  ll ans = pow_mod(10, n, m * m) / m;
  cout << ans % m << endl;
  return 0;
}