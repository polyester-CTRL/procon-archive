#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  vector<int> h(n);
  for (int i = 0; i < n; i++){
    cin >> h[i];
  }
  vector<ll> dp(n + 5, 1001001001);
  dp[0] = 0;

  for (int i = 0; i < n; i++){
    dp[i + 1] = min(dp[i + 1], dp[i] + abs(h[i + 1] - h[i]));
    dp[i + 2] = min(dp[i + 2], dp[i] + abs(h[i + 2] - h[i]));
  }
  cout << dp[n - 1] << "\n";
  return 0;
}