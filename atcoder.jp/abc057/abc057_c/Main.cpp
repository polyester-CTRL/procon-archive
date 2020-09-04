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
ll f(ll n){
  ll ans = 0;
  while(n > 0) {
    n /= 10;
    ans++;
  }
  return ans;
}
int main(){
  ll n;
  cin >> n;
  ll ans = f(n);

  for(ll i = 1; i <= sqrt(n) + 1; i++){
    if(n % i == 0){
      ans = min(ans, f(max((ll)i, n / i)));
    }
  }
  cout << ans << endl;
  return 0;
}