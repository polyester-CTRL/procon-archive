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
  int ans = -100100;
  for(int i = 100; i < 1000; i++) {
    if(abs(a - i) <= 9 || (abs(a - i) % 10 == 0 && abs(a - i) <= 90) ||
       abs(a - i) % 100 == 0) {
      ans = max(ans, i - b);
    }
  }
  for(int j = 100; j < 1000; j++) {
    if(abs(b - j) <= 9 || (abs(b - j) % 10 == 0 && abs(b - j) <= 90) ||
       abs(b - j) % 100 == 0) {
      ans = max(ans, a - j);
    }
  }
  cout << ans << endl;

  return 0;
}