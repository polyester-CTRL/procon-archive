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
  int h1, h2, m1, m2, k;
  cin >> h1 >> m1 >> h2 >> m2 >> k;
  cout << (h2 - h1) * 60 + m2 - m1 - k << endl;
  return 0;
}