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
  vector<ll> dp(10, 0);
  for(int i = 0; i < n; i++) {
    if(s[i] == 'c') {
      dp[0]++;
    } else if(s[i] == 'h') {
      dp[1] += dp[0];
      dp[1] %= MOD;
    } else if(s[i] == 'o') {
      dp[2] += dp[1];
      dp[2] %= MOD;
    } else if(s[i] == 'k') {
      dp[3] += dp[2];
      dp[3] %= MOD;
    } else if(s[i] == 'u') {
      dp[4] += dp[3];
      dp[4] %= MOD;
    } else if(s[i] == 'd') {
      dp[5] += dp[4];
      dp[5] %= MOD;
    } else if(s[i] == 'a') {
      dp[6] += dp[5];
      dp[6] %= MOD;
    } else if(s[i] == 'i') {
      dp[7] += dp[6];
      dp[7] %= MOD;
    }
  }
  cout << dp[7] << endl;
  return 0;
}