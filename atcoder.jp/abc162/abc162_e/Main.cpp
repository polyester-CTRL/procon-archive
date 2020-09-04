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

int main() {
  int n, k;
  cin >> n >> k;
  ll sum = 0;
  ll tmp = 1;

  vector<ll> a(k + 1, 0);
  for(int i = k; i > 0; i--) {
    int cnt = 0;
    cnt = k / i;
    
    tmp = modpow(cnt, n);
    //cout << tmp << endl;
    for(int j = i * 2; j <= k; j += i){
      if(j > k + 1){
        break;
      }
      tmp -= (ll)a[j];
      if(tmp < 0){
        tmp += MOD;
      }
    }
    a[i] = tmp;
    sum += tmp * i % MOD;
    sum %= MOD;
  }
  
  cout << sum << endl;
  return 0;
}