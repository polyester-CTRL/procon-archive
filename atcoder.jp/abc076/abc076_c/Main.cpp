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
#include<numeric>
using namespace std;
using ll = long long;
int main(){
  string sd, t, ans;
  cin >> sd >> t;
  int n = sd.length();
  int m = t.length();
  int Qmin = m + 1;
  int start = -1;
  for(int i = 0; i < n - m + 1; i++) {
    if(sd[i] == t[0] || sd[i] == '?'){
      int q = 0;
      bool ok = true;
      for(int j = 0; j < m; j++) {
        if(sd[i + j] == t[j]){
          continue;
        }else if(sd[i + j] == '?'){
          q++;
        } else {
          ok = false;
          break;
        }
      }
      if(ok){
        start = i;
        if(q == 0){
          break;
        }
      }
    }
  }
  for(int i = 0; i < n; i++){
    if(i >= start && i < start + m){
      ans += t[i - start];
    }else if(sd[i] == '?'){
      ans += 'a';
    }else{
      ans += sd[i];
    }
  }
  if(start == -1) {
    cout << "UNRESTORABLE\n";
  } else {
    cout << ans << endl;
  }
  return 0;
}