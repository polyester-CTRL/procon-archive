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
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int m;
  cin >> m;
  vector<int> b(m);
  for(int i = 0; i < m; i++) {
    cin >> b[i];
  }
  int x;
  cin >> x;
  vector<int> dp(100100, 0);
  for(auto p : b) {
    dp[p] = -1;
  }
  dp[0] = 1;
  for(int i = 0; i < 100100; i++) {
    if(dp[i] <= 0) {
      continue;
    }
    for(int j = 0; j < n; j++) {
      if(i + a[j] >= 100010) {
        continue;
      }
      if(dp[i + a[j]] != -1) {
        dp[i + a[j]] = 1;
      }
    }
  }
  if(dp[x]) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}