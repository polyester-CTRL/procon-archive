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
  vector<vector<int>> a(h, vector<int>(w, 1001001001));
  vector<pair<int, int>> b;
  for(int i = 0; i < h; i++) {
    string tmp;
    cin >> tmp;
    for(int j = 0; j < w; j++) {
      if(tmp[j] == '#') {
        a[i][j] = 0;
      }
    }
  }
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(i < h - 1) {
        a[i + 1][j] = min(a[i + 1][j], a[i][j] + 1);
      }
      if(j < w - 1) {
        a[i][j + 1] = min(a[i][j + 1], a[i][j] + 1);
      }
    }
  }
  for(int i = h - 1; i >= 0; i--) {
    for(int j = w - 1; j >= 0; j--) {
      if(i > 0) {
        a[i - 1][j] = min(a[i - 1][j], a[i][j] + 1);
      }
      if(j > 0) {
        a[i][j - 1] = min(a[i][j - 1], a[i][j] + 1);
      }
    }
  }
  int ans = 0;
  for(int i = 0; i < h; i++) {
    ans = max(ans, *max_element(a[i].begin(), a[i].end()));
  }
  cout << ans << endl;
  return 0;
}