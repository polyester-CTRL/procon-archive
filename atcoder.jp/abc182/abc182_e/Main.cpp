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
  int h, w, n, m;
  cin >> h >> w >> n >> m;
  vector<vector<int>> g(h, vector<int>(w, 0));
  for(int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    g[a][b] = 1;
  }
  for(int i = 0; i < m; i++) {
    int c, d;
    cin >> c >> d;
    c--, d--;
    g[c][d] = -1;
  }
  vector<vector<int>> ans(h, vector<int>(w, 0));
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(g[i][j] == 1) {
        ans[i][j] = 1;
        while(j < w - 1 && g[i][j + 1] != -1) {
          ans[i][j + 1] = 1;
          j++;
        }
      }
    }
  }
  for(int i = 0; i < h; i++) {
    for(int j = w - 1; j >= 0; j--) {
      if(g[i][j] == 1) {
        ans[i][j] = 1;
        while(j > 0 && g[i][j - 1] != -1) {
          ans[i][j - 1] = 1;
          j--;
        }
      }
    }
  }
  for(int j = 0; j < w; j++) {
    for(int i = 0; i < h; i++) {
      if(g[i][j] == 1) {
        ans[i][j] = 1;
        while(i < h - 1 && g[i + 1][j] != -1) {
          ans[i + 1][j] = 1;
          i++;
        }
      }
    }
  }
  for(int j = 0; j < w; j++) {
    for(int i = h - 1; i >= 0; i--) {
      if(g[i][j] == 1) {
        ans[i][j] = 1;
        while(i > 0 && g[i - 1][j] != -1) {
          ans[i - 1][j] = 1;
          i--;
        }
      }
    }
  }
  int sum = 0;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      sum += ans[i][j];
    }
  }
  cout << sum << endl;
  return 0;
}