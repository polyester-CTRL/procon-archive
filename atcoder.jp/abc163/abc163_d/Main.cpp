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
int main(){
  ll n, k;
  cin >> n >> k;
  ll ans = 0;
  vector<ll> a(n + 5, 0);
  for(int i = 0; i <= n; i++){
    a[i + 1] += a[i] + i;
  }
  vector<ll> b(n + 5, 0);
  for(int i = 0; i <= n; i++){
    b[i + 1] += b[i] + (n - i);
  }
    for(int i = k; i <= n; i++) {
      ll maxi = b[i];
      ll mini = a[i];
      //cout << mini << " " << maxi << '\n';
      ans += maxi - mini + 1;
      if(maxi == mini){
        ans++;
      }
      ans %= MOD;
    }
  cout << (ans + 1)% MOD << endl;
  return 0;
}