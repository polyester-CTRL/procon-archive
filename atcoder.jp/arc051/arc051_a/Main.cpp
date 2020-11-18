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
  int x1, x2, x3, y1, y2, y3, r;
  cin >> x1 >> y1 >> r;
  cin >> x2 >> y2 >> x3 >> y3;
  if(x1 - r < x2 || x1 + r > x3 || y1 - r < y2 || y1 + r > y3) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
  if((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) <= r * r &&
     (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3) <= r * r &&
     (x1 - x2) * (x1 - x2) + (y1 - y3) * (y1 - y3) <= r * r &&
     (x1 - x3) * (x1 - x3) + (y1 - y2) * (y1 - y2) <= r * r) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
  }
  return 0;
}