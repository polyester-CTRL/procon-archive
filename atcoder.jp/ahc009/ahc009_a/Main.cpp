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
  int sx, sy, tx, ty;
  double p;
  cin >> sy >> sx >> ty >> tx >> p;
  vector<vector<int>> hWall(20, vector<int>(20, 0));
  vector<vector<int>> vWall(20, vector<int>(20, 0));

  vector<vector<int>> field(20 * 20);
  vector<int> seen(20 * 20), prevPos(20 * 20);
  for(int i = 0; i < 20; i++) {
    string tmp;
    cin >> tmp;
    for(int j = 0; j < 19; j++) {
      hWall[i][j] = (tmp[j] - '0');
    }
  }
  for(int i = 0; i < 19; i++) {
    string tmp;
    cin >> tmp;
    for(int j = 0; j < 20; j++) {
      vWall[i][j] = (tmp[j] - '0');
    }
  }
  for(int i = 0; i < 20; i++) {
    for(int j = 0; j < 19; j++) {
      if(hWall[i][j] == 0) {
        field[i * 20 + j].push_back(i * 20 + j + 1);
        field[i * 20 + j + 1].push_back(i * 20 + j);
      }
    }
  }
  for(int i = 0; i < 19; i++) {
    for(int j = 0; j < 20; j++) {
      if(vWall[i][j] == 0) {
        field[i * 20 + j].push_back((i + 1) * 20 + j);
        field[(i + 1) * 20 + j].push_back(i * 20 + j);
      }
    }
  }
  queue<int> que;
  que.push(sy * 20 + sx);
  while(!que.empty()) {
    int now = que.front();
    que.pop();
    seen[now] = 1;
    for(auto i : field[now]) {
      if(seen[i] != 0) {
        continue;
      }
      que.push(i);
      prevPos[i] = now;
    }
  }
  string ans;
  int now = ty * 20 + tx;
  int num = 1;
  if(p > 0.25) {
    num++;
  }
  while(now != sy * 20 + sx) {
    if(now - prevPos[now] == 20) {
      for(int i = 0; i < num; i++) {
        ans.push_back('D');
        if(ans.size() > 0 && *ans.rbegin() == 'D') {
          continue;
        }
      }
    } else if(now - prevPos[now] == -20) {
      for(int i = 0; i < num; i++) {
        ans.push_back('U');
        if(ans.size() > 0 && *ans.rbegin() == 'U') {
          continue;
        }
      }
    } else if(now - prevPos[now] == 1) {
      for(int i = 0; i < num; i++) {
        ans.push_back('R');
        if(ans.size() > 0 && *ans.rbegin() == 'R') {
          continue;
        }
      }
    } else if(now - prevPos[now] == -1) {
      for(int i = 0; i < num; i++) {
        ans.push_back('L');
        if(ans.size() > 0 && *ans.rbegin() == 'L') {
          continue;
        }
      }
    }
    // cout << now / 20 << ":" << now % 20 << " ";
    now = prevPos[now];
  }
  // cout << endl;
  reverse(ans.begin(), ans.end());
  cout << ans << endl;

  return 0;
}