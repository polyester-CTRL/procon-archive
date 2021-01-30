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
  if(c == 0) {
    if(a > b) {
      cout << "Takahashi\n";
    } else {
      cout << "Aoki\n";
    }
  } else {
    if(a >= b) {
      cout << "Takahashi\n";
    } else {
      cout << "Aoki\n";
    }
  }
  return 0;
}