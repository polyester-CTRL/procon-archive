#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  ll dp[100] = {};
  dp[0] = 2;
  dp[1] = 1;
  for (int i = 2; i <= n; i++){
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  cout << dp[n] << "\n";
  return 0;
}