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
bool isOK(vector<vector<int>> &a, vector<vector<int>> &b) {
  bool ret = true;
  for(int i = 0; i < a.size(); i++) {
    for(int j = 0; j < a[i].size(); j++) {
      if(a[i][j] != b[i][j]) {
        ret = false;
        break;
      }
    }
  }
  return ret;
}
int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w, 0));
  vector<vector<int>> b(h, vector<int>(w, 0));
  for(int i = 0; i < h; i++) {
    string tmp;
    cin >> tmp;
    for(int j = 0; j < w; j++) {
      if(tmp[j] == '#') {
        a[i][j] = 1;
      }
    }
  }
  for(int i = 0; i < h; i++) {
    string tmp;
    cin >> tmp;
    for(int j = 0; j < w; j++) {
      if(tmp[j] == '#') {
        b[i][j] = 1;
      }
    }
  }
  bool ans = false;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      vector<vector<int>> c(h, vector<int>(w, 0)), c2(h, vector<int>(w, 0));
      for(int i2 = 0; i2 < h; i2++) {
        for(int j2 = 0; j2 < w; j2++) {
          c[(i2 + i) % h][j2] = a[i2][j2];
        }
      }
      for(int i2 = 0; i2 < h; i2++) {
        for(int j2 = 0; j2 < w; j2++) {
          c2[i2][(j2 + j) % w] = c[i2][j2];
        }
      }
      if(isOK(c2, b)) {
        ans = true;
      }
    }
  }
  if(ans) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}