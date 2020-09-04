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
  int h, w, k;
  cin >> h >> w >> k;
  vector<string> s(h);
  for(int i = 0; i < h; i++) {
    cin >> s[i];
  }
  int ans = 0;
  int black = 0;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(s[i][j] == '#') {
        black++;
      }
    }
  }
  for(int i = 0; i < (1 << h); i++) {
    for(int j = 0; j < (1 << w); j++) {
      int cnt = black;
      for(int a = 0; a < h; a++) {
        for(int b = 0; b < w; b++) {
          if(i & (1 << a)) {
            if(s[a][b] == '#') {
              cnt--;
            }
          } else if(j & (1 << b)) {
            if(s[a][b] == '#') {
              cnt--;
            }
          }
        }
      }
      if(cnt == k) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}