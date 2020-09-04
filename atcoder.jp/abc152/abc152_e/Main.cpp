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
#define MOD 1000000007

ll modpow(ll x, ll n) { 
  ll ans = 1;
  while(n > 0){
    if(n % 2 == 1){
      ans *= x;
      ans %= MOD;
    }
    x *= x;
    x %= MOD;
    n >>= 1;
  }
  return ans;
}

ll modinv(ll a, ll m) {
  ll b = m, u = 1, v = 0;
  while (b) {
    ll t = a / b;
    a -= t * b; swap(a, b);
    u -= t * v; swap(u, v);
  }
  u %= m;
  if (u < 0) u += m;
  return u;
}

int main(){
  int n;
  cin >> n;
  map<ll,ll> x;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    ll tmp = a[i];
    ll div = 2;
    while(div * div <= tmp) {
      ll cnt = 0;
      while(tmp % div == 0) {
        tmp /= div;
        cnt++;
      }
      if(cnt > 0){
        x[div] = max(x[div], cnt);
      }
      div++;
      if(div >= 4){
        div++;
      }
    }
    if(tmp != 1){
      x[tmp] = max(x[tmp], (ll)1);
    }
  }
  ll ans = 0;
  ll maxi = 1;
  for(auto p : x){
    maxi *= modpow(p.first, p.second);
    maxi %= MOD;
  }
  vector<ll> b(n, maxi);
  
  for(int i = 0; i < n; i++) {
    b[i] *= modinv(a[i], MOD);
    b[i] %= MOD;
  }
  for(int i = 0; i < n; i++){
    ans += b[i];
    ans %= MOD;
  }
  cout << ans << endl;
  return 0;
}