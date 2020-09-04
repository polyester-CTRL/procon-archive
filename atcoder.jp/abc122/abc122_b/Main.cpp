#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  string s;
  cin >> s;
  int n = s.length();
  vector<int> a(n + 5, 0);

  for (int i = 0; i < n; i++){
    if(s[i] == 'A' || s[i] == 'G' || s[i] == 'C' || s[i] == 'T'){
      a[i] = 1;
    }else{
      a[i] = 0;
    }
  }
  int ans = 0, count = 0;

  for (int i = 0; i < n; i++){
    if(a[i] == 1){
      int flag = true;
      while(flag){
        if (a[i] == 0){
          flag = false;
          if(ans<count){
            ans = count;
          }
          count = 0;
        }else{
          i++;
          count++;
        }
      }
    }
  }
  cout << ans << "\n";
  return 0;
}