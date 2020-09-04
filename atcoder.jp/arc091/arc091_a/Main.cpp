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
  ll n, m;
  cin >> n >> m;
  ll ans;
  if(n >= 2 && m >= 2){
    ans = (n - 2) * (m - 2);
  } else if(n == 1 && m == 1){
    ans = 1;
  }else if(n >= 2){
    ans = (n - 2);
  }else{
    ans = (m - 2);
  }
  cout << ans << endl;
  return 0;
}