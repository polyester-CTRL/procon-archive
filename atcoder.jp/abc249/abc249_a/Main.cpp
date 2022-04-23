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
  int a, b, c, d, e, f, x;
  cin >> a >> b >> c >> d >> e >> f >> x;
  int sumA = 0, sumB = 0;
  int xa = x, xb = x;
  while(xa > 0) {
    if(xa >= a) {
      xa -= a;
      sumA += a * b;
    } else {
      sumA += xa * b;
      xa = 0;
    }
    if(xa >= c) {
      xa -= c;
    } else {
      xa = 0;
    }
  }
  while(xb > 0) {
    if(xb >= d) {
      xb -= d;
      sumB += d * e;
    } else {
      sumB += xb * e;
    }
    if(xb >= f) {
      xb -= f;
    } else {
      xb = 0;
    }
  }
  if(sumA > sumB) {
    cout << "Takahashi\n";
  } else if(sumA == sumB) {
    cout << "Draw\n";
  } else {
    cout << "Aoki\n";
  }
  return 0;
}