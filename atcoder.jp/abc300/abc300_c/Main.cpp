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
  int h, w, n;
  cin >> h >> w;
  n = min(h, w);
  vector<vector<int>> c(h, vector<int>(w, 0));
  for(int i = 0; i < h; i++) {
    string str;
    cin >> str;
    for(int j = 0; j < w; j++) {
      if(str[j] == '#') {
        c[i][j] = 1;
      }
    }
  }

  vector<int> ans(n + 1, 0);
  for(int num = 1; num <= n; num++) {
    for(int i = 0; i < h; i++) {
      for(int j = 0; j < w; j++) {
        bool check = true;
        if(c[i][j] != 1) {
          check = false;
          continue;
        }
        for(int d = 1; d <= num; d++) {
          if(i + d >= h || i - d < 0 || j + d >= w || j - d < 0) {
            check = false;
            break;
          }
          if(c[i + d][j + d] + c[i + d][j - d] + c[i - d][j + d] +
                 c[i - d][j - d] !=
             4) {
            // cout << i << " " << j << " " << d << endl;
            check = false;
          }
        }
        // cout << i << " " << j << " "  << endl;
        if(check) {
          // cout << i << " " << j << " " << endl;
          int d = num + 1;
          if(i + d < h && i - d >= 0 && j + d < w && j - d >= 0) {
            if(c[i + d][j + d] + c[i + d][j - d] + c[i - d][j + d] +
                   c[i - d][j - d] ==
               4) {
              check = false;
            }
          }
        }
        if(check) {
          ans[num]++;
        }
      }
    }
  }
  for(int i = 0; i < n; i++) {
    cout << ans[i + 1] << " ";
  }
  cout << endl;
  return 0;
}