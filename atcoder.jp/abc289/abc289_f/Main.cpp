#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iomanip>
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
  int sx, sy, tx, ty;
  cin >> sx >> sy >> tx >> ty;
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if((sx - tx) % 2 != 0 || (sy - ty) % 2 != 0) {
    cout << "No\n";
    return 0;
  }
  if(a == b && sx != tx && tx != 2 * a - sx) {
    cout << "No\n";
    return 0;
  }
  if(c == d && sy != ty && ty != 2 * c - sy) {
    cout << "No\n";
    return 0;
  }
  if(a == b && c == d && tx == sx && ty == 2 * c - sy) {
    cout << "No\n";
    return 0;
  }
  if(a == b && c == d &&  tx == 2 * a - sx && ty == sy) {
    cout << "No\n";
    return 0;
  }
  cout << "Yes\n";
  const auto instruction{[&sx, &sy](int x, int y) {
    cout << x << " " << y << endl;
    sx = 2 * x - sx;
    sy = 2 * y - sy;
  }};

  if(a == b && tx == 2 * a - sx || c == d && ty == 2 * c - sy) {
    instruction(a, c);
  }
  while(sx < tx) {
    instruction(a, c);
    instruction(a + 1, c);
  }
  while(sx > tx) {
    instruction(a + 1, c);
    instruction(a, c);
  }
  while(sy < ty) {
    instruction(a, c);
    instruction(a, c + 1);
  }
  while(sy > ty) {
    instruction(a, c + 1);
    instruction(a, c);
  }

  return 0;
}