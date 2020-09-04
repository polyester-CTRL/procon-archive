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
  int n;
  cin >> n;
  vector<int> a(n);
  vector<ll> dp(n + 2, 1001001001001);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  dp[0] = 0;
  for(int i = 0; i < n; i++) {
    dp[i + 1] = min(dp[i + 1], dp[i] + abs(a[i + 1] - a[i]));
    dp[i + 2] = min(dp[i + 2], dp[i] + abs(a[i + 2] - a[i]));
  }
  cout << dp[n - 1] << endl;
  return 0;
}