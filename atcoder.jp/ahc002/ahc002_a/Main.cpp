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
  int sx, sy;
  cin >> sx >> sy;
  vector<int> seen(50 * 50, 0);
  vector<vector<int>> g(50, vector<int>(50, 0));
  vector<vector<int>> points(50, vector<int>(50, 0));
  for(int i = 0; i < 50; i++) {
    for(int j = 0; j < 50; j++) {
      cin >> g[i][j];
    }
  }
  for(int i = 0; i < 50; i++) {
    for(int j = 0; j < 50; j++) {
      cin >> points[i][j];
    }
  }
  seen[g[sx][sy]]++;
  string ans;
  int nowX = sx, nowY = sy;
  while(true) {
    if(nowY > 0 && seen[g[nowX][nowY - 1]] == 0) {
      ans.push_back('L');
      nowY--;
    } else if(nowY < 49 && seen[g[nowX][nowY + 1]] == 0) {
      ans.push_back('R');
      nowY++;
    } else if(nowX > 0 && seen[g[nowX - 1][nowY]] == 0) {
      ans.push_back('U');
      nowX--;
    } else if(nowX < 49 && seen[g[nowX + 1][nowY]] == 0) {
      ans.push_back('D');
      nowX++;
    } else {
      break;
    }
    seen[g[nowX][nowY]]++;
  }
  cout << ans << endl;
  return 0;
}