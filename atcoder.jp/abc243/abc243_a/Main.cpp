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
  int v, a, b, c;
  cin >> v >> a >> b >> c;
  v %= (a + b + c);
  if(v < a) {
    cout << "F\n";
    return 0;
  }
  v -= a;
  if(v < b) {
    cout << "M\n";
  } else {
    cout << "T\n";
  }

  return 0;
}