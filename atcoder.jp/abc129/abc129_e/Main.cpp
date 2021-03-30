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
  string s;
  cin >> s;
  int n = s.length();
  vector<int> a;
  for(int i = 0; i < n; i++) {
    a.push_back((int)(s[i] - '0'));
  }
  vector<vector<ll>> dp(n + 5, vector<ll>(2, 0));
  dp[0][0] = 1;
  for(int i = 0; i < n; i++) {
    for(int smaller = 0; smaller < 2; smaller++) {
      for(int x = 0; x < (smaller ? 2 : (a[i] + 1)); x++) {
        if(x == 1) {
          dp[i + 1][smaller || x < a[i]] += dp[i][smaller] * 2;
        } else {
          dp[i + 1][smaller || x < a[i]] += dp[i][smaller];
        }
        dp[i + 1][smaller || x < a[i]] %= MOD;
      }
    }
  }
  cout << (dp[n][0] + dp[n][1]) % MOD << endl;
  return 0;
}