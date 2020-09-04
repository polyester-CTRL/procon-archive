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
  long double a, b;
  cin >> a >> b;
  long double c = 0;
  b = modfl(b, &c);
  b *= 100;

  ll ans = a * b / 100 + a * c;
  cout << ans << endl;
  return 0;
}