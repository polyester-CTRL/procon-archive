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
  int H, W;
  cin >> H >> W;
  vector<vector<int>> g(H + 5, vector<int>(W + 5));
  vector<vector<int>> dp(H + 5, vector<int>(W + 5, 1001001));
  for(int h = 0; h < H; h++) {
    for(int w = 0; w < W; w++){
      char c;
      cin >> c;
      if(c == '.'){
        g[h][w] = 1;
      }else{
        g[h][w] = 0;
      }
    }
  }
  int flag = 0;
  int ans = 0;
  if(g[0][0] == 0){
    dp[0][0] = 1;
  }else{
    dp[0][0] = 0;
  }
  for(int h = 0; h < H; h++) {
    for(int w = 0; w < W; w++){
      int i = h;
      while(i < H && g[i][w] == g[h][w]){
        dp[i][w] = min(dp[i][w], dp[h][w]);
        i++;
      }
      i = w;
      while(i < W && g[h][i] == g[h][w]){
        dp[h][i] = min(dp[h][i], dp[h][w]);
        i++;
      }
      if(g[h + 1][w] + g[h][w] == 1){
        dp[h + 1][w] = min(dp[h + 1][w], dp[h][w] + 1);
      }
      if(g[h][w + 1] + g[h][w] == 1){
        dp[h][w + 1] = min(dp[h][w + 1], dp[h][w] + 1);
      }
    }
  }
  cout << (dp[H - 1][W - 1] + 1) / 2 << '\n';

  return 0;
}