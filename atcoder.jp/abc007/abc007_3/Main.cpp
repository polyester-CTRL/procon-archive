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
  int r, c;
  cin >> r >> c;
  int sy, sx, gy, gx;
  cin >> sy >> sx >> gy >> gx;
  sy--;
  sx--;
  gy--;
  gx--;
  vector<string> s(r);
  for(int i = 0; i < r; i++) {
    cin >> s[i];
  }
  vector<vector<int>> dist(r, vector<int>(c, -1));
  queue<pair<int, int>> que;
  que.push({sy, sx});
  dist[sy][sx] = 0;
  while(!que.empty()) {
    auto p = que.front();
    que.pop();
    int dx[4] = {1, 0, 0, -1};
    int dy[4] = {0, 1, -1, 0};
    for(int i = 0; i < 4; i++) {
      if(p.first + dy[i] >= r || p.first + dy[i] < 0) {
        continue;
      }
      if(p.second + dx[i] >= c || p.second + dx[i] < 0) {
        continue;
      }
      if(s[p.first + dy[i]][p.second + dx[i]] == '#') {
        continue;
      }
      if(dist[p.first + dy[i]][p.second + dx[i]] != -1) {
        continue;
      }
      dist[p.first + dy[i]][p.second + dx[i]] = dist[p.first][p.second] + 1;
      que.push({p.first + dy[i], p.second + dx[i]});
    }
  }
  cout << dist[gy][gx] << endl;
  return 0;
}