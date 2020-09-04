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
  ll n, p;
  cin >> n >> p;
  ll a = 2;
  if(n == 1){
    cout << p << endl;
  }else{
    ll maxi = 1;
    for(ll i = 1; pow(i , n) <= p; i++){
      if(p % (ll)pow(i, n) == 0){
        maxi = i;
      }
    }
    cout << maxi << endl;
  }

  /*
  map<ll, ll> m;
  ll maxi = p;
  while(a <= p) {
    if(p % a == 0){
      m[a]++;
      p /= a;
    }else{
      a++;
    }
  }
  ll ans = 1;
  for(int i = 2; i <= a; i++) {
    //cout << i << " " << m[i] << " ";
    if(m[i] >= n){
      ans *= pow(i, max((ll)1, m[i] / n));
    }
  }
  cout << ans << endl;
  */
  /*
  cout << endl;
  for(int i = 0; i < a; i++) {
    if(m[i] > 0){
      cout << i << " " << m[i] << " ";
    }
  }
  cout << endl;
  */
  return 0;
}