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
  string s;
  cin >> s;
  int n = s.length();
  int cs = 0, ct = 0;
  int ans = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == '0'){
      if(ct > 0){
        ct--;
        ans += 2;
      }else{
        cs++;
      }
    }else{
      if(cs > 0){
        cs--;
        ans += 2;
      }else{
        ct++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}