#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cstdio>
#include <numeric>
using namespace std;
using ll = long long;
int main() {
  int n, x, t;
  cin >> n >> x >> t;
  cout << ((n + x - 1) / x) * t << endl;
  return 0;
}