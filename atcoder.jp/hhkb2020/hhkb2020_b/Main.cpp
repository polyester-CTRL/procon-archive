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
  vector<vector<int>> a(h, vector<int>(w, 0));
  for(int i = 0; i < h; i++) {
    string tmp;
    cin >> tmp;
    for(int j = 0; j < w; j++) {
      if(tmp[j] == '.') {
        a[i][j] = 0;
      } else {
        a[i][j] = 1;
      }
    }
  }
  int ans = 0;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(j < w - 1 && a[i][j] == 0 && a[i][j + 1] == 0) {
        ans++;
      }
    }
  }
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(i < h - 1 && a[i][j] == 0 && a[i + 1][j] == 0) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}