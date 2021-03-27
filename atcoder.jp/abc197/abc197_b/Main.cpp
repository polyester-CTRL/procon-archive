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
  int h, w, x, y;
  cin >> h >> w >> x >> y;
  x--, y--;
  vector<string> s(h);
  for(int i = 0; i < h; i++) {
    cin >> s[i];
  }
  int nowX = x, nowY = y;
  int ans = 0;
  while(nowX > 0) {
    if(s[nowX - 1][nowY] == '.') {
      ans++;
    } else {
      break;
    }
    nowX--;
  }
  nowX = x;
  while(nowX < h - 1) {
    if(s[nowX + 1][nowY] == '.') {
      ans++;
    } else {
      break;
    }
    nowX++;
  }
  nowX = x;
  while(nowY > 0) {
    if(s[nowX][nowY - 1] == '.') {
      ans++;
    } else {
      break;
    }
    nowY--;
  }
  nowY = y;
  while(nowY < w - 1) {
    if(s[nowX][nowY + 1] == '.') {
      ans++;
    } else {
      break;
    }
    nowY++;
  }
  cout << ans + 1 << endl;
  return 0;
}