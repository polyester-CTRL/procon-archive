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
const ll MOD = 1000000007;
int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> s1(h, vector<int>(w, 1));
  for(int i = 0; i < h; i++) {
    string tmp;
    cin >> tmp;
    for(int j = 0; j < w; j++) {
      if(tmp[j] == '#') {
        s1[i][j] = 0;
      }
    }
  }
  vector<vector<ll>> x(h, vector<ll>(w, 0)), y(h, vector<ll>(w, 0)),
      z(h, vector<ll>(w, 0)), dp(h, vector<ll>(w, 0));
  dp[0][0] = 1;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(s1[i][j] == 0) {
        dp[i][j] = 0;
        x[i][j] = 0;
        y[i][j] = 0;
        z[i][j] = 0;
        continue;
      }
      if(j > 0) {
        x[i][j] += x[i][j - 1] + dp[i][j - 1];
      }
      x[i][j] %= MOD;
      if(i > 0) {
        y[i][j] += y[i - 1][j] + dp[i - 1][j];
      }
      y[i][j] %= MOD;
      if(i > 0 && j > 0) {
        z[i][j] += z[i - 1][j - 1] + dp[i - 1][j - 1];
      }
      z[i][j] %= MOD;
      dp[i][j] += x[i][j] + y[i][j] + z[i][j];
      dp[i][j] %= MOD;
    }
  }
  cout << dp[h - 1][w - 1] << endl;

  return 0;
}