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
  int r, c;
  cin >> r >> c;
  vector<string> g(r);
  for(int i = 0; i < r; i++) {
    cin >> g[i];
  }
  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      if(g[i][j] == '.' || g[i][j] == '#') {
        continue;
      }
      for(int k = 0; k < r; k++) {
        for(int l = 0; l < c; l++) {
          if(g[k][l] != '#') {
            continue;
          }
          if(abs(i - k) + abs(j - l) <= (int)(g[i][j] - '0')) {
            g[k][l] = '.';
          }
        }
      }
      g[i][j] = '.';
    }
  }
  for(int i = 0; i < r; i++) {
    cout << g[i] << endl;
  }
  return 0;
}