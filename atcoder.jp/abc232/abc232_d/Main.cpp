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
  vector<vector<int>> g(h, vector<int>(w, 0)), ans(h, vector<int>(w, 0));
  for(int i = 0; i < h; i++) {
    string tmp;
    cin >> tmp;
    for(int j = 0; j < w; j++) {
      if(tmp[j] == '#') {
        g[i][j] = 1;
      }
    }
  }
  ans[0][0] = 1;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(g[i][j] == 1 || ans[i][j] == 0) {
        continue;
      }
      if(j < w - 1 && g[i][j + 1] == 0) {
        ans[i][j + 1] = max(ans[i][j + 1], ans[i][j] + 1);
      }
      if(i < h - 1 && g[i + 1][j] == 0) {
        ans[i + 1][j] = max(ans[i + 1][j], ans[i][j] + 1);
      }
    }
  }
  int maxi = 0;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      maxi = max(maxi, ans[i][j]);
    }
  }
  cout << maxi << endl;
  return 0;
}