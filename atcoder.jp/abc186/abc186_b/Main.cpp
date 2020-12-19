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
  int h, w;
  cin >> h >> w;
  int mini = 1001;
  vector<vector<int>> a(h, vector<int>(w));
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cin >> a[i][j];
      mini = min(a[i][j], mini);
    }
  }
  int ans = 0;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      ans += a[i][j] - mini;
    }
  }
  cout << ans << endl;
  return 0;
}