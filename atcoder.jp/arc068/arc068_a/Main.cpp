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
  ll x;
  cin >> x;
  
  ll ans = 0;
  ans += x / 11 * 2;
  ll tmp = x % 11;
  if(tmp > 0){
    if(tmp <= 6) {
      ans += 1;
    }else{
      ans += 2;
    }
  }
  
  cout << ans << endl;
  return 0;
}