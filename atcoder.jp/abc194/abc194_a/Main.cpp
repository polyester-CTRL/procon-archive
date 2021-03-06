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
  int a, b;
  cin >> a >> b;
  int c = a + b;
  if(c >= 15 && b >= 8) {
    cout << 1 << endl;
  } else if(c >= 10 && b >= 3) {
    cout << 2 << endl;
  } else if(c >= 3) {
    cout << 3 << endl;
  } else {
    cout << 4 << endl;
  }
  return 0;
}