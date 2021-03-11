#include <algorithm>
#include <atcoder/math>
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
using namespace atcoder;
using ll = long long;
int main() {
  const ll MOD = 1000000007;
  int n;
  cin >> n;
  vector<ll> a(n), last(200200, -1);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    a[i]--;
  }
  vector<ll> dp(n + 10, 0);
  dp[0] = 1;
  for(int i = 0; i < n; i++) {
    if(last[a[i]] != -1) {
      dp[i] += dp[last[a[i]]];
    }
    dp[i] %= MOD;
    last[a[i]] = i;
    while(i < n - 1 && a[i] == a[i + 1]) {
      dp[i + 1] = dp[i];
      last[a[i]] = i;
      i++;
    }
    dp[i + 1] = dp[i];
  }
  cout << dp[n] << endl;
  return 0;
}