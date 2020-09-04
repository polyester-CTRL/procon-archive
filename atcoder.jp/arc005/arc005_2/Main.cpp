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
  int x, y;
  cin >> x >> y;
  x--;
  y--;
  string w;
  cin >> w;
  vector<vector<int>> c(10, vector<int>(10));
  for(int i = 0; i < 9; i++) {
    string s;
    cin >> s;
    for(int j = 0; j < 9; j++) {
      c[i][j] = (int)(s[j] - '0');
    }
  }
  int dx = 0, dy = 0;
  if(w[0] == 'R') {
    dx = 1;
  } else if(w[0] == 'L') {
    dx = -1;
  }
  if(w.length() == 2) {
    if(w[1] == 'U') {
      dy = -1;
    } else if(w[1] == 'D') {
      dy = 1;
    }
  } else {
    if(w[0] == 'U') {
      dy = -1;
    } else if(w[0] == 'D') {
      dy = 1;
    }
  }
  vector<int> ans;
  for(int i = 0; i < 4; i++) {
    ans.push_back(c[y][x]);
    if(x == 0 && dx == -1) {
      dx = 1;
    } else if(x == 8 && dx == 1) {
      dx = -1;
    }
    if(y == 0 && dy == -1) {
      dy = 1;
    } else if(y == 8 && dy == 1) {
      dy = -1;
    }
    x += dx;
    y += dy;
  }
  for(int i = 0; i < 4; i++) {
    cout << ans[i];
  }
  cout << endl;
  return 0;
}