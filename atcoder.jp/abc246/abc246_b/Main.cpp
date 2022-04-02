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
  double a, b;
  cin >> a >> b;
  printf("%.10f %.10f\n", a / sqrt(a * a + b * b), b / sqrt(a * a + b * b));
  return 0;
}