#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  int h, n;
  cin >> h >> n;
  int a[1005], b[1005], c[1005];
  for(int i=0; i<n; i++){
    cin >> a[i] >> b[i];
  }
  vector<vector<int>> z(n, vector<int>(2));
  vector<int> dp(h+5, 1001001001);
  dp[0] = 0;
  for (int i = 0; i < n; i++){
    for(int j=0; j<h; j++){
      int nj = min(j + a[i], h); //範囲外アクセスへの対策 基本はj+a
      dp[nj] = min(dp[nj], dp[j] + b[i]); //何もしない か 
                                          //攻撃して(減る体力jがnjになって)魔力を消耗するか
    }
  }
  cout << dp[h] << "\n";
  return 0;
}