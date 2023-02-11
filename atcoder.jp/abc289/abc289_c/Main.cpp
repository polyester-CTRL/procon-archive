#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iomanip>
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
  vector<vector<int>> a(m);
  for(int i = 0; i < m; i++) {
    int c;
    cin >> c;
    for(int j = 0; j < c; j++) {
      int tmp;
      cin >> tmp;
      a[i].push_back(tmp);
    }
  }
  int ans = 0;
  for(int bit = 0; bit < (1 << m); bit++) {
    vector<int> check(n, 0);
    for(int i = 0; i < m; i++) {
      if(bit & (1 << i)) {
        for(auto p : a[i]) {
          check[p - 1] = 1;
        }
      }
    }
    bool ok = true;
    for(int i = 0; i < n; i++) {
      ok &= check[i];
    }
    ans += ok;
  }
  cout << ans << endl;
  return 0;
}