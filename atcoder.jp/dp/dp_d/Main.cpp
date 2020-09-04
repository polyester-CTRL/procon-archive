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
  int n, w;
  cin >> n >> w;
  vector<int> we(n + 5), v(n + 5);
  vector<vector<ll>> dp(100100, vector<ll>(n + 5, 0));
  for(int i = 0; i < n; i++) {
    cin >> we[i] >> v[i];
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j <= w; j++){
      if(we[i] <= j){
        dp[j][i + 1] = max(dp[j][i], dp[j - we[i]][i] + v[i]);
      }
      dp[j][i + 1] = max(dp[j][i + 1], dp[j][i]);
    }
  }

  cout << dp[w][n] << '\n';

  return 0;
}