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
  int n;
  cin >> n;
  int ans = 0;
  for(int i = 1; i < n; i++) {
    ans += (n - 1) / i;
  }
  cout << ans << endl;
  return 0;
}