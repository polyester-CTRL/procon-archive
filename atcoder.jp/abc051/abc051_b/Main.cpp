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
  int k, s;
  cin >> k >> s;
  
  ll ans = 0;
  for(int i = 0; i <= k; i++) {
    for(int j = 0; j <= k; j++){
      if(i + j >= s - k && i + j <= s){
        ans++;
        //cout << i << " " << j << " " <<  s - i - j << endl;
      }
    }
  }
  cout << ans << endl;
  return 0;
}