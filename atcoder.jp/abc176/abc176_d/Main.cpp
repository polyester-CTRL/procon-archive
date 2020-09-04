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
  int ch, cw, dh, dw;
  cin >> ch >> cw >> dh >> dw;
  ch--, cw--;
  dh--, dw--;
  vector<string> s(h);
  for(int i = 0; i < h; i++) {
    cin >> s[i];
  }
  vector<vector<int>> a(h, vector<int>(w, 1001001001)), b(h, vector<int>(w, 0));
  deque<pair<int, int>> que;
  que.push_back({ch, cw});
  a[ch][cw] = 0;
  b[ch][cw] = 1;
  while(!que.empty()) {
    int nowh, noww;
    nowh = que.front().first;
    noww = que.front().second;
    // nowh = que.top().first;
    // noww = que.top().second;
    b[nowh][noww] = 0;
    que.pop_front();
    int dist = a[nowh][noww];
    if(nowh + 1 < h && a[nowh + 1][noww] > dist && s[nowh + 1][noww] != '#') {
      a[nowh + 1][noww] = dist;
      if(b[nowh + 1][noww] == 0) {
        b[nowh + 1][noww] = 1;
        que.push_front({nowh + 1, noww});
      }
    }
    if(nowh - 1 >= 0 && a[nowh - 1][noww] > dist && s[nowh - 1][noww] != '#') {
      a[nowh - 1][noww] = dist;
      if(b[nowh - 1][noww] == 0) {
        b[nowh - 1][noww] = 1;
        que.push_front({nowh - 1, noww});
      }
    }
    if(noww + 1 < w && a[nowh][noww + 1] > dist && s[nowh][noww + 1] != '#') {
      a[nowh][noww + 1] = dist;
      if(b[nowh][noww + 1] == 0) {
        b[nowh][noww + 1] = 1;
        que.push_front({nowh, noww + 1});
      }
    }
    if(noww - 1 >= 0 && a[nowh][noww - 1] > dist && s[nowh][noww - 1] != '#') {
      a[nowh][noww - 1] = dist;
      if(b[nowh][noww - 1] == 0) {
        b[nowh][noww - 1] = 1;
        que.push_front({nowh, noww - 1});
      }
    }

    for(int i = -2; i <= 2; i++) {
      for(int j = -2; j <= 2; j++) {
        if(nowh + i < h && nowh + i >= 0) {
          if(noww + j < w && noww + j >= 0) {
            if(a[nowh + i][noww + j] > dist + 1 &&
               s[nowh + i][noww + j] != '#') {
              a[nowh + i][noww + j] = dist + 1;
              if(b[nowh + i][noww + j] == 0) {
                b[nowh + i][noww + j] = 1;
                que.push_back({nowh + i, noww + j});
              }
            }
          }
        }
      }
    }
  }
  if(a[dh][dw] == 1001001001) {
    cout << -1 << endl;
  } else {
    cout << a[dh][dw] << endl;
  }
  return 0;
}