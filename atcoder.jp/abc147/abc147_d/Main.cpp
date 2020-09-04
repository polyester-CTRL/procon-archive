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
#include<bitset>
using namespace std;
using ll = long long;
#define MOD 1000000007
int main(){
  int n;
  cin>>n;
  int bit[60] = {};
  for(int i = 0; i < n; i++) {
    ll tmp;
    cin >> tmp;
    for(int j = 0; j < 60; j++){
      if((tmp>>j) & 1){
        bit[j]++;
      }
    }
  }
  ll ans = 0;
  for(int i = 0; i < 60; i++){
    //cout << bit[i] << endl;
    ans += (ll)pow(2, i) % MOD * (n - bit[i]) % MOD * bit[i];
    ans %= MOD;
  }
  cout << ans << endl;
  return 0;
}