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
vector<vector<ll>> dp(35, vector<ll>(35, 0));
string func(ll a, ll b, ll k) {
  string ans;
  if(a == 0) {
    for(int i = 0; i < b; i++) {
      ans.push_back('b');
    }
    return ans;
  }
  if(b == 0) {
    for(int i = 0; i < a; i++) {
      ans.push_back('a');
    }
    return ans;
  }
  if(k <= dp[a - 1][b]) {
    return "a" + func(a - 1, b, k);
  } else {
    return "b" + func(a, b - 1, k - dp[a - 1][b]);
  }
}
int main() {
  ll a, b, k;
  cin >> a >> b >> k;
  dp[0][0] = 1;
  for(int i = 0; i <= 30; i++) {
    for(int j = 0; j <= 30; j++) {
      if(i > 0) {
        dp[i][j] += dp[i - 1][j];
      }
      if(j > 0) {
        dp[i][j] += dp[i][j - 1];
      }
    }
  }
  cout << func(a, b, k) << endl;
  return 0;
}