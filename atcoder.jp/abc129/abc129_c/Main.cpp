#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
int main(){
  int n, m;
  cin >> n >> m;
  vector<int> oks(n + 1, 1);
  for (int i = 0; i < m; i++){
    int tmp;
    cin >> tmp;
    oks[tmp] = 0;
  }
  vector<long long int> ans(n + 5, 0);
  int b = 0;
  ans[0] = 1;
  //ans[1] = 1;

  for (int i = 0; i < n; i++){
    for (int j = i + 1; j <= min(n, i+2); j++){
      if(oks[j] == 1){
        ans[j] += ans[i];
        ans[j] %= mod;
      }
    }
    //        1000000007 
  }
  cout << ans[n] << "\n";
  return 0;
}