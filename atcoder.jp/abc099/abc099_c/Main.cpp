#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
#include<string>
#include<cmath>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<cstdio>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  vector<int> dp(1000000, 1001001001);
  dp[0] = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; i + pow(9, j) <= n; j++){
      dp[i + pow(9, j)] = min(dp[i + pow(9, j)], dp[i] + 1);
    }
    for(int j = 0; i + pow(6, j) <= n; j++){
      dp[i + pow(6, j)] = min(dp[i + pow(6, j)], dp[i] + 1);
    }
    for(int j = 0; j <= 6; j++){
      dp[i + 1] = min(dp[i + 1], dp[i] + 1);
    }
  }
  cout << dp[n] << "\n";
  return 0;
}