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
  int n, m;
  cin >> n >> m;
  vector<int> a(n, 1);
  vector<int> b(n, 0);
  b[0] = 1;
  for(int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    x--, y--;
    if(b[x] == 1) {
      b[y] = 1;
    }
    a[x]--;
    a[y]++;
    if(a[x] == 0) {
      b[x] = 0;
    }
  }
  int ans = 0;
  for(const auto &p : b) {
    ans += p;
  }
  cout << ans << endl;
  return 0;
}