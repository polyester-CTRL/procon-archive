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
  string s;
  cin >> s;
  int x, y;
  cin >> x >> y;
  int n = s.length();
  vector<int> cntX, cntY;
  bool di = true;
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'F') {
      cnt++;
    } else {
      if(di) {
        cntX.push_back(cnt);
        cnt = 0;
        di = false;
      } else {
        cntY.push_back(cnt);
        cnt = 0;
        di = true;
      }
    }
  }
  if(di) {
    cntX.push_back(cnt);
    cnt = 0;
    di = false;
  } else {
    cntY.push_back(cnt);
    cnt = 0;
    di = true;
  }
  const int co = 8020;
  vector<vector<int>> dx(cntX.size() + 10, vector<int>(co * 2, -1)),
      dy(cntY.size() + 10, vector<int>(co * 2, -1));
  dx[1][co + cntX[0]] = 1;
  for(int i = 1; i < cntX.size(); i++) {
    for(int j = 0; j < co * 2; j++) {
      if(dx[i][j] == i) {
        dx[i + 1][j + cntX[i]] = i + 1;
        dx[i + 1][j - cntX[i]] = i + 1;
      }
    }
  }
  if(dx[cntX.size()][co + x] == cntX.size()) {
    dy[0][co] = 0;
    for(int i = 0; i < cntY.size(); i++) {
      for(int j = 0; j < co * 2; j++) {
        if(dy[i][j] == i) {
          dy[i + 1][j + cntY[i]] = i + 1;
          dy[i + 1][j - cntY[i]] = i + 1;
        }
      }
    }
    if(dy[cntY.size()][co + y] == cntY.size()) {
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";
  return 0;
}