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
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  if(x <= a) {
    cout << 1 << endl;
  } else if(x <= b) {
    printf("%.12f\n", (double)c / (b - a));
  } else {
    cout << 0 << endl;
  }
  return 0;
}