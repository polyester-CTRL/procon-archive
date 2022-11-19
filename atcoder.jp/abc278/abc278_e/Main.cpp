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
  int h, w, n, maskH, maskW;
  cin >> h >> w >> n >> maskH >> maskW;
  vector<vector<int>> g(h, vector<int>(w, 0));
  vector<int> sum(n, 0);
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cin >> g[i][j];
      g[i][j]--;
      sum[g[i][j]]++;
    }
  }
  int ans = 0;
  for(int i = 0; i < n; i++) {
    if(sum[i] > 0) {
      ans++;
    }
  }
  for(int i = 0; i < h - maskH + 1; i++) {
    vector<int> sum2(n, 0);
    for(int j = 0; j < w - maskW + 1; j++) {
      if(j == 0) {
        for(int y = 0; y < maskH; y++) {
          for(int x = 0; x < maskW; x++) {
            sum2[g[i + y][j + x]]++;
          }
        }
      } else {
        for(int y = 0; y < maskH; y++) {
          sum2[g[i + y][j + maskW - 1]]++;
          sum2[g[i + y][j - 1]]--;
        }
      }
      int tmp = 0;
      for(int k = 0; k < n; k++) {
        // cout << sum2[k] << ":";
        if(sum[k] == sum2[k]) {
          tmp++;
        }
      }
      cout << n - tmp << " ";
    }
    cout << '\n';
  }

  return 0;
}