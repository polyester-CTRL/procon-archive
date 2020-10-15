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
  int a, b, c;
  cin >> a >> b >> c;
  double ans = (a + b + c) * (a + b + c) * acos(-1);
  if(a > b + c) {
    ans -= (a - b - c) * (a - b - c) * acos(-1);
  }
  if(b > a + c) {
    ans -= (b - a - c) * (b - a - c) * acos(-1);
  }
  if(c > a + b) {
    ans -= (c - a - b) * (c - a - b) * acos(-1);
  }
  printf("%.10f\n", ans);
  return 0;
}