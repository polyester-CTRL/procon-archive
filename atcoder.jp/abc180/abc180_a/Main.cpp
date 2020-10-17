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
  int n, a, b;
  cin >> n >> a >> b;
  n -= a;
  n += b;
  cout << n << endl;
  return 0;
}