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
  double p;
  cin >> p;
  double x = -1.5 * log2(1.5 / (p * log(2.0)));
  if(x < 0) {
    printf("%.10f\n", p);
  } else {
    printf("%.10f\n", x + 1.5 / log(2));
  }
  return 0;
}