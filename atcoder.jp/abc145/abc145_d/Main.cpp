#include<iostream>
using namespace std;
using ll = long long;
ll fact[(int)1e6 + 5];
ll fact_inv[(int)1e6 + 5];

const ll MOD = (int)1e9 + 7;
// 繰り返し二乗法
ll power(ll a, ll b){
  ll res=1;
  while(b>0){
    if(b&1) res=res*a%MOD;
    a=a*a%MOD;
    b>>=1;
  }
  return res;
}

ll comb(ll n, ll r){
	return (fact[n]*fact_inv[r])%MOD*fact_inv[n-r]%MOD;
}

int main(){
  int x, y;
  cin >> x >> y;
  if((x+y)%3 != 0){
    cout << 0 << "\n";
    return 0;
  }

  int a = (2 * x - y) / 3;
  int b = (2 * y - x) / 3;
  if(a < 0 || b < 0){
    cout << 0 << "\n";
    return 0;
  }
  int n = a + b + 100000;

  fact[0] = 1;
  for (int i = 0; i < n; i++){
    fact[i + 1] = fact[i] * (i + 1) % MOD;
  }
  fact_inv[n] = power(fact[n], MOD - 2);
  for (int i = n - 1; i >= 0; i--){
    fact_inv[i] = fact_inv[i + 1] * (i + 1) % MOD;
  }
  cout << comb(a + b, a) << "\n";

  return 0;
}