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
  ll r1, c1, r2, c2;
  cin >> r1 >> c1 >> r2 >> c2;
  r2 -= r1;
  c2 -= c1;
  if(r2 == 0 && c2 == 0) {
    cout << 0 << endl;
  } else if(abs(r2) + abs(c2) <= 3) {
    cout << 1 << endl;
  } else {
    if(abs(abs(r2) - abs(c2)) == 0) {
      cout << 1 << endl;
    } else if(abs(r2) % 2 == abs(c2) % 2) {
      cout << 2 << endl;
    } else if(abs(abs(r2) - abs(c2)) <= 3) {
      cout << 2 << endl;
    } else if(abs(r2) + abs(c2) <= 6) {
      cout << 2 << endl;
    } else {
      cout << 3 << endl;
    }
  }
  return 0;
}