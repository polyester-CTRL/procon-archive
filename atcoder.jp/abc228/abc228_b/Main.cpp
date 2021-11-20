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
  int n, x;
  cin >> n >> x;
  vector<int> a(n, 0), b(n, 0);
  x--;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i <= n; i++) {
    b[x] = 1;
    x = a[x] - 1;
  }
  int ans = 0;
  for(int i = 0; i < n; i++) {
    ans += b[i];
  }
  cout << ans << endl;

  return 0;
}