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
  int h1, w1, h2, w2;
  cin >> h1 >> w1;
  vector<vector<int>> g1(h1, vector<int>(w1));
  for(int i = 0; i < h1; i++) {
    for(int j = 0; j < w1; j++) {
      cin >> g1[i][j];
    }
  }
  cin >> h2 >> w2;
  vector<vector<int>> g2(h2, vector<int>(w2));
  for(int i = 0; i < h2; i++) {
    for(int j = 0; j < w2; j++) {
      cin >> g2[i][j];
    }
  }
  for(int bit = 0; bit < (1 << (h1 + w1)); bit++) {
    vector<int> deletionH(h1, 0), deletionW(w1, 0);
    int cntH = 0, cntW = 0;
    for(int i = 0; i < h1; i++) {
      if(bit & (1 << i)) {
        deletionH[i] = 1;
        cntH++;
      }
    }
    for(int i = 0; i < w1; i++) {
      if(bit & (1 << (i + h1))) {
        deletionW[i] = 1;
        cntW++;
      }
    }
    if(h2 != h1 - cntH || w2 != w1 - cntW) {
      continue;
    }
    vector<vector<int>> g3(h2);
    int nowH = 0, nowW = 0;
    for(int i = 0; i < h1; i++) {
      if(deletionH[i] == 1) {
        continue;
      }
      for(int j = 0; j < w1; j++) {
        if(deletionH[i] || deletionW[j]) {
          continue;
        }

        g3[nowH].push_back(g1[i][j]);
      }
      nowH++;
    }
    bool ok = true;
    for(int i = 0; i < h2; i++) {
      for(int j = 0; j < w2; j++) {
        if(g2[i][j] != g3[i][j]) {
          ok = false;
        }
      }
    }
    if(ok) {
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";
  return 0;
}