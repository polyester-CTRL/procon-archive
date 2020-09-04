#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;
using ll = long long;
int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> g(H + 5, vector<int>(W + 5)),
      in_que(H + 5, vector<int>(W + 5, 0)),
      dist(H + 5, vector<int>(W + 5, 1001001001));
  int sh, sw, gh, gw;
  for(int h = 0; h < H; h++) {
    string tmp;
    cin >> tmp;
    for(int w = 0; w < W; w++) {
      char c;
      c = tmp[w];
      if(c == 's') {
        g[h][w] = 1;
        sh = h;
        sw = w;
      } else if(c == 'g') {
        g[h][w] = 1;
        gh = h;
        gw = w;
      } else if(c == '.') {
        g[h][w] = 1;
      } else {
        g[h][w] = 0;
      }
    }
  }
  deque<pair<int, int>> deq;
  deq.push_front({sh, sw});
  in_que[sh][sw] = 1;
  dist[sh][sw] = 0;
  while(!deq.empty()) {
    int nowX, nowY;
    nowX = deq.front().first;
    nowY = deq.front().second;
    deq.pop_front();
    in_que[nowX][nowY] = 0;
    int cnt = dist[nowX][nowY];
    for(int i = -1; i < 2; i++) {
      for(int j = -1; j < 2; j++) {
        if(nowX + i >= H || nowX + i < 0) {
          continue;
        }
        if(nowY + j >= W || nowY + j < 0) {
          continue;
        }
        if(abs(i) + abs(j) != 1) {
          continue;
        }
        if(dist[nowX + i][nowY + j] > cnt && g[nowX + i][nowY + j] == 1) {
          dist[nowX + i][nowY + j] = cnt;
          if(in_que[nowX + i][nowY + j] == 0) {
            deq.push_front({nowX + i, nowY + j});
            in_que[nowX + i][nowY + j] = 1;
          }
        }
        if(dist[nowX + i][nowY + j] > cnt + 1 && g[nowX + i][nowY + j] == 0) {
          dist[nowX + i][nowY + j] = cnt + 1;
          if(in_que[nowX + i][nowY + j] == 0) {
            deq.push_back({nowX + i, nowY + j});
            in_que[nowX + i][nowY + j] = 1;
          }
        }
      }
    }
  }
  if(dist[gh][gw] <= 2) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
  return 0;
}