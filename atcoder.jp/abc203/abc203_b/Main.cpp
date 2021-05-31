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
  int n, k;
  cin >> n >> k;
  int ans = 0;
  for(int i = 0; i < n; i++) {
    ans += (i + 1) * 100 * k;
  }
  for(int i = 0; i < k; i++) {
    ans += (i + 1) * n;
  }
  cout << ans << endl;
  return 0;
}