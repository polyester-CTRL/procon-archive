#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n, m;
  cin >> n >> m;
  int k[10], s[10][10], p[10];
  for (int i = 0; i < m; i++){
    cin >> k[i];
    for(int j=0; j<k[i]; j++){
      cin >> s[i][j];
      s[i][j]--;
    }
  }
  for(int i=0; i<m; i++){
    cin >> p[i];
  }
  int ans = 0;
  bool flag = true;
  for (int bit = 0; bit < (1 << n); bit++){
    for (int i = 0; i < m; i++){
      int count = 0;
      for(int j=0; j<k[i]; j++){
        if(bit & (1<<s[i][j])){
          count++;
        }
      }
      if(count %2 == p[i]){
        flag = true;
        continue;
      }else{
        flag = false;
        break;
      }
    }
    if(flag) ans++;
  }
  cout << ans << "\n";
  return 0;
}