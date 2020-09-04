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
  ll a, b, x;
  cin >> a >> b >> x;
  ll ans = b / x - a / x;
  if(a % x == 0){
    ans++;
  }
  cout << ans << endl;
  return 0;
}