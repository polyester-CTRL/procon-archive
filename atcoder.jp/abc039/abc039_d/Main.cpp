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
  vector<vector<int>> a(h, vector<int>(w, 0)), b(h, vector<int>(w, 0));
  for(int i = 0; i < h; i++) {
    string s;
    cin >> s;
    for(int j = 0; j < w; j++) {
      if(s[j] == '#') {
        a[i][j] = 1;
      }
    }
  }
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(a[i][j] == 0) {
        continue;
      }
      bool ok = true;
      int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
      int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
      for(int k = 0; k < 8; k++) {
        if(i + dy[k] < 0 || i + dy[k] >= h) {
          continue;
        }
        if(j + dx[k] < 0 || j + dx[k] >= w) {
          continue;
        }
        if(a[i + dy[k]][j + dx[k]] == 0) {
          ok = false;
          break;
        }
      }
      if(ok) {
        b[i][j] = 1;
        a[i][j] = 2;
        for(int k = 0; k < 8; k++) {
          if(i + dy[k] < 0 || i + dy[k] >= h) {
            continue;
          }
          if(j + dx[k] < 0 || j + dx[k] >= w) {
            continue;
          }
          a[i + dy[k]][j + dx[k]] = 2;
        }
      }
    }
  }
  bool possible = true;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(a[i][j] == 1) {
        possible = false;
        break;
      }
    }
  }
  if(possible) {
    cout << "possible\n";
    for(int i = 0; i < h; i++) {
      for(int j = 0; j < w; j++) {
        if(b[i][j] == 1) {
          cout << '#';
        } else {
          cout << '.';
        }
      }
      cout << endl;
    }
  } else {
    cout << "impossible\n";
  }
  return 0;
}