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
  vector<double> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<vector<double>> dp(n + 5, vector<double>(n + 5, 0));
  dp[0][0] = 1;
  
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++){
      dp[i + 1][j + 1] += dp[i][j] * a[i];
      dp[i + 1][j] += dp[i][j] * (1 - a[i]);
    }
  }
  double ans = 0;
  for(int i = n / 2 + 1; i <= n; i++) {
    ans += dp[n][i];
  }

  printf("%.10f\n", ans);

  return 0;
}