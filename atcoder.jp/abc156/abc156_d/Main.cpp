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

ll fact;
ll fact_inv;

const ll MOD = 1e9 + 7;
// 繰り返し二乗法
ll power(ll a, ll b){
  ll res=1;
  while(b>0){
    if(b&1) res = res * a % MOD;
    a = a * a % MOD;
    b >>= 1;
  }
  return res;
}



int main(){
  ll n, a, b;
  cin >> n >> a >> b;
  ll ans = power(2, n) - 1;
  
  //nCa
  ll nca = 1;
  ll ncb = 1;

  ll x = 1, y = 1;

  for(int i=0; i<a; i++){
    x *= (n - i);
    x %= MOD;
    y *= (i + 1);
    y %= MOD;
  }
  nca = x * power(y, MOD - 2) % MOD;

  x = 1, y = 1;
  for(int i=0; i<b; i++){
    x *= (n - i);
    x %= MOD;
    y *= (i + 1);
    y %= MOD;
  }
  ncb = x * power(y, MOD - 2) % MOD;
  //cout << ans <<"\n" << nca << "\n" << ncb << " ";
  ans -= (nca + ncb);
  while(ans<0){
    ans += MOD;
  }
  cout << ans % MOD << "\n";

  return 0;
}