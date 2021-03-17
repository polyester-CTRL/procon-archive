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
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<vector<ll>> dp(60, vector<ll>(2, 0));
  for(int i = 0; i < 60; i++) {
    dp[i][1] = -2829382256910270454;
  }
  vector<int> digit;
  for(int i = 0; i < 50; i++) {
    digit.push_back((int)(k % 2));
    k /= 2;
  }
  for(ll i = 40; i >= 0; i--) {
    ll cnt = 0, num = ((ll)1 << i);
    for(int j = 0; j < n; j++) {
      if(a[j] & num) {
        cnt++;
      }
    }
    dp[i][1] = dp[i + 1][1] + max(n - cnt, cnt) * num;
    if(digit[i] == 1) {
      dp[i][0] = dp[i + 1][0] + (n - cnt) * num;
      dp[i][1] = max(dp[i][1], dp[i + 1][0] + cnt * num);
    } else {
      dp[i][0] = dp[i + 1][0] + cnt * num;
    }
  }
  cout << max(dp[0][0], dp[0][1]) << endl;
  return 0;
}