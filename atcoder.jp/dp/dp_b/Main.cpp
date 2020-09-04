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
  int n, k;
  cin >> n >> k;
  vector<int>h(n + 5, 0);
  for(int i=0; i<n; i++){
    cin >> h[i];
  }
  vector<int> dp(n + 5, 1001001001);
  dp[0] = 0;
  
  for(int i = 0; i <= n; i++){
    for (int j = 0; j <= min(k, n-i); j++){
      dp[i + j] = min(dp[i + j], dp[i] + abs(h[i+j] - h[i]));
    }
  }
  /*
  for(int i=0; i<n; i++){
    cout << dp[i] << " ";
  }
  */
  cout << dp[n - 1] << "\n";
  return 0;
}