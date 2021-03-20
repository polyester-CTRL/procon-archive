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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int ans = -1001001;
  for(int i = a; i <= b; i++) {
    for(int j = c; j <= d; j++) {
      ans = max(ans, i - j);
    }
  }
  cout << ans << endl;
  return 0;
}