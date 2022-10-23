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
double calc(int s, int n) {
  int sum = 0;
  for(int i = n; i < 20; i++) {
    if(s & (1 << i)) {
      sum++;
    }
  }
  return pow(0.5, sum);
}

int main() {
  const double INF = 1e18;
  int m, n;
  vector<pair<int, int>> x(20);
  vector<int> seen(m, 1);
  vector<vector<double>> dp(500000, vector<double>(20, INF));
  double ans = INF;
  cin >> n >> m;
  for(int i = 0; i < n + m; i++) {
    cin >> x[i].first >> x[i].second;
  }
  for(int i = 0; i < 500000; i++) {
    for(int j = 0; j < n + m; j++) {
      dp[i][j] = INF;
    }
  }
  for(int i = 0; i < n + m; i++) {
    dp[1 << i][i] = hypot(x[i].first, x[i].second);
  }
  for(int bit = 1; bit < (1 << (n + m)); bit++) {
    for(int i = 0; i < n + m; i++) {
      if((bit >> i) & 1) {
        for(int j = 0; j < n + m; j++) {
          if(!((bit >> j) & 1)) {
            double dist =
                hypot(x[i].first - x[j].first, x[i].second - x[j].second);
            dp[bit ^ (1 << j)][j] =
                min(dp[bit ^ (1 << j)][j], dp[bit][i] + dist * calc(bit, n));
          }
        }
      }
    }
  }
  for(int i = 0; i < n + m; i++) {
    for(int bit = (1 << n) - 1; bit < (1 << (n + m)); bit += 1 << n) {
      ans =
          min(ans, dp[bit][i] + hypot(x[i].first, x[i].second) * calc(bit, n));
    }
  }
  printf("%.10f\n", ans);
  return 0;
}