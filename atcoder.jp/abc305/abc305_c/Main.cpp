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
int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> g(h, vector<int>(w, 0));
  for(int i = 0; i < h; i++) {
    string tmp;
    cin >> tmp;
    for(int j = 0; j < w; j++) {
      if(tmp[j] == '#') {
        g[i][j] = 1;
      }
    }
  }
  for(int i = 0; i < h - 1; i++) {
    for(int j = 0; j < w - 1; j++) {
      if(g[i][j] + g[i][j + 1] + g[i + 1][j] + g[i + 1][j + 1] == 3) {
        if(g[i][j] == 0) {
          cout << i + 1 << " " << j + 1 << endl;
          return 0;
        }
        if(g[i][j + 1] == 0) {
          cout << i + 1 << " " << j + 2 << endl;
          return 0;
        }
        if(g[i + 1][j] == 0) {
          cout << i + 2 << " " << j + 1 << endl;
          return 0;
        }
        if(g[i + 1][j + 1] == 0) {
          cout << i + 2 << " " << j + 2 << endl;
          return 0;
        }
      }
    }
  }
  return 0;
}