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
  int n;
  cin >> n;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll ans = 1000;
  ll st = 0;
  for(int i = 0; i < n - 1; i++) {
    if(a[i] > a[i + 1]) {
      ans += a[i] * st;
      st = 0;
    }else if(a[i] < a[i + 1]){
      st += ans / a[i];
      ans %= a[i]; 
    }
  }
  ans += a[n - 1] * st;
  st = 0;
  cout << ans << endl;
  return 0;
}
