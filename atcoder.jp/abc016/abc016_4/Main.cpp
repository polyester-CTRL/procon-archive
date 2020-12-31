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
typedef struct Coordinates {
  ll x, y;
} point;

int judge(point a, point b, point c, point d) {
  ll s, t;
  s = (a.x - b.x) * (c.y - a.y) - (a.y - b.y) * (c.x - a.x);
  t = (a.x - b.x) * (d.y - a.y) - (a.y - b.y) * (d.x - a.x);
  if(s * t >= 0) {
    return false;
  }

  s = (c.x - d.x) * (a.y - c.y) - (c.y - d.y) * (a.x - c.x);
  t = (c.x - d.x) * (b.y - c.y) - (c.y - d.y) * (b.x - c.x);
  if(s * t >= 0) {
    return false;
  }
  return true;
}

int main() {
  int n;
  point a, b;
  cin >> a.x >> a.y >> b.x >> b.y;
  cin >> n;
  vector<point> c(n);
  for(int i = 0; i < n; i++) {
    cin >> c[i].x >> c[i].y;
  }
  int ans = 0;
  for(int i = 0; i < n; i++) {
    if(judge(a, b, c[i], c[(i + 1) % n])) {
      ans++;
    }
  }
  cout << ans / 2 + 1 << endl;

  return 0;
}