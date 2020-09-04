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
  ans += (k - 1) * (n - k) * 6;
  ans += (n - 1) * 3;
  ans += 1;
  printf("%.15lf\n", ans / (double)(n * n * n));
  return 0;
}