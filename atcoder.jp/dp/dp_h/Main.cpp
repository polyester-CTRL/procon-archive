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
#define MOD (int)1e9 + 7
int main(){
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));
  for(int i = 0; i < h; i++){
    string s;
    cin >> s;
    for(int j = 0; j < w; j++){
      if(s[j] == '.'){
        a[i][j] = 1;
      }else{
        a[i][j] = 0;
      }
    }
  }
  vector<vector<int>> dp(h + 1, vector<int>(w + 1, 0));
  dp[0][0] = 1;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++){
      if(a[i][j] == 1){
        dp[i + 1][j] += dp[i][j];
        dp[i][j + 1] += dp[i][j];
        dp[i + 1][j] %= MOD;
        dp[i][j + 1] %= MOD;
      }else{
        dp[i][j] = 0;
      }
    }
  }
  cout << dp[h - 1][w - 1] << '\n';
  return 0;
}