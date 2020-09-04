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
  int r, c, d;
  cin >> r >> c >> d;
  vector<vector<int>> a(r, vector<int>(c, 0));
  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      cin >> a[i][j];
    }
  }
  int ans = 0;
  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      if((i + j) <= d && (i + j) % 2 == d % 2) {
        ans = max(ans, a[i][j]);
      }
    }
  }
  cout << ans << endl;
  return 0;
}