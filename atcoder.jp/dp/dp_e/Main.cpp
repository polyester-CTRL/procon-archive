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
  int n, W;
  cin >> n >> W;
  vector<int> v(n), w(n);
  for(int i = 0; i < n; i++){
    cin >> w[i] >> v[i];
  }
  vector<vector<int>> dp(105, vector<int>(100100, 1001001001));
  dp[0][0] = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j <= 100001; j++){
      if(j >= v[i]){
        dp[i + 1][j] = min(dp[i][j], dp[i][j - v[i]] + w[i]);
      }
      dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
    }
  }
  ll ans = 0;
  for(int i = 0; i <= 100000; i++) {
    if(dp[n][i] <= W){
      ans = i;
    }
  }
  cout << ans << '\n';
  return 0;
}