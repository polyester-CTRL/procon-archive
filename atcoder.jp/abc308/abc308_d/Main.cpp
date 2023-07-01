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
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  vector<vector<int>> g(h, vector<int>(w, 0));
  string snuke = "snuke";
  for(int i = 0; i < h; i++) {
    cin >> s[i];
    for(int j = 0; j < w; j++) {
      for(int k = 0; k < 5; k++) {
        if(s[i][j] == snuke[k]) {
          g[i][j] = k;
        }
      }
    }
  }
  queue<pair<int, int>> que;
  que.push({0, 0});
  vector<vector<int>> seen(h, vector<int>(w, 0));
  while(!que.empty()) {
    auto top = que.front();
    que.pop();
    vector<pair<int, int>> direction = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    for(int i = 0; i < direction.size(); i++) {
      int y = top.first + direction[i].first;
      int x = top.second + direction[i].second;
      if(y < 0 || y >= h) {
        continue;
      }
      if(x < 0 || x >= w) {
        continue;
      }
      if(seen[y][x] != 0) {
        continue;
      }
      if(g[y][x] - g[top.first][top.second] == 1 ||
         (g[y][x] == 0 && g[top.first][top.second] == 4)) {
        que.push({y, x});
        seen[y][x] = 1;
      }
    }
  }
  if(seen[h - 1][w - 1] == 1) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}