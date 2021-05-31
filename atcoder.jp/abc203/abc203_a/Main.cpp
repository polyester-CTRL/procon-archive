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
  int a, b, c;
  cin >> a >> b >> c;
  if(a == b) {
    cout << c << endl;
  } else if(a == c) {
    cout << b << endl;
  } else if(b == c) {
    cout << a << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}