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
const ll MOD = 998244353;
int main() {
  string s;
  cin >> s;
  int n = s.length();
  vector<ll> dp1(n, 0), dp2(n, 0);
  if(s[0] == '(' || s[0] == '?') {
    dp1[0] = 1;
  }
  for(int i = 0; i < n; i++) {
    if(s[i] == '(' || s[i] == '?') {
      for(int j = 0; j < n - 1; j++) {
        dp2[j + 1] = dp1[j];
      }
    }
    if(s[i] == ')' || s[i] == '?') {
      for(int j = 1; j < n; j++) {
        dp2[j - 1] += dp1[j];
      }
    }
    for(int j = 0; j < n; j++) {
      // cout << dp2[j] << " ";
      dp2[j] %= MOD;
      dp1[j] = dp2[j];
      dp2[j] = 0;
    }
    // cout << endl;
    // swap(dp1, dp2);
  }
  cout << dp1[0] << endl;

  return 0;
}