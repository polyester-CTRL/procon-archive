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
  vector<vector<int>> s(h, vector<int>(w, 0));
  for(int i = 0; i < h; i++) {
    string tmp;
    cin >> tmp;
    for(int j = 0; j < w; j++) {
      if(tmp[j] == '#') {
        s[i][j] = 1;
      }
    }
  }
  pair<int, int> start = {-1, -1};
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(s[i][j] == 1) {
        start = {i, j};
        break;
      }
    }
    if(start.first != -1) {
      break;
    }
  }
  vector<vector<int>> seen(h, vector<int>(w, 0));
  queue<pair<int, int>> que;
  int ans = 0;
  que.push(start);
  while(!que.empty()) {
    auto now = que.front();
    que.pop();
    seen[now.first][now.second] = 1;
    int sum = 0;
    if(s[now.first][now.second + 1] == s[now.first + 1][now.second]) {
      if(s[now.first + 1][now.second + 1] == 1) {
        sum += 0;
      } else {
        sum += 1;
      }
    }
    if(s[now.first][now.second + 1] == s[now.first - 1][now.second]) {
      if(s[now.first - 1][now.second + 1] == 1) {
        sum += 0;
      } else {
        sum += 1;
      }
    }
    if(s[now.first][now.second - 1] == s[now.first + 1][now.second]) {
      if(s[now.first + 1][now.second - 1] == 1) {
        sum += 0;
      } else {
        sum += 1;
      }
    }
    if(s[now.first][now.second - 1] == s[now.first - 1][now.second]) {
      if(s[now.first - 1][now.second - 1] == 1) {
        sum += 0;
      } else {
        sum += 1;
      }
    }
    if(s[now.first][now.second - 1] + s[now.first][now.second + 1] + s[now.first - 1][now.second] + s[now.first + 1][now.second] == 1) {
      sum = 2;
    } else if(s[now.first][now.second - 1] + s[now.first][now.second + 1] + s[now.first - 1][now.second] + s[now.first + 1][now.second] == 0) {
      sum = 4;
    }
    ans += sum;
    if(s[now.first + 1][now.second] == 1 && seen[now.first + 1][now.second] == 0) {
      que.push({now.first + 1, now.second});
      seen[now.first + 1][now.second] = 1;
    }
    if(s[now.first - 1][now.second] == 1 && seen[now.first - 1][now.second] == 0) {
      que.push({now.first - 1, now.second});
      seen[now.first - 1][now.second] = 1;
    }
    if(s[now.first][now.second + 1] == 1 && seen[now.first][now.second + 1] == 0) {
      que.push({now.first, now.second + 1});
      seen[now.first][now.second + 1] = 1;
    }
    if(s[now.first][now.second - 1] == 1 && seen[now.first][now.second - 1] == 0) {
      que.push({now.first, now.second - 1});
      seen[now.first][now.second - 1] = 1;
    }
    // cout << sum << endl;
  }
  cout << ans << endl;
  return 0;
}