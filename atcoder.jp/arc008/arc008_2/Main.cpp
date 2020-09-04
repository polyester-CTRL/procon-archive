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
  string s, t;
  cin >> s >> t;
  vector<int> a(200, 0), b(200, 0);
  for(int i = 0; i < n; i++) {
    a[s[i]]++;
  }
  for(int i = 0; i < m; i++) {
    b[t[i]]++;
  }
  int ans = 0;
  for(int i = 0; i < 200; i++) {
    if(a[i] == 0) {
      continue;
    }
    if(b[i] == 0) {
      cout << -1 << endl;
      return 0;
    }
    ans = max(ans, (a[i] + b[i] - 1) / b[i]);
  }
  cout << ans << endl;
  return 0;
}