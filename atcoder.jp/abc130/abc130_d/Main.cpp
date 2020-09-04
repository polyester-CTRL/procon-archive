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
int main(){
  ll n, k;
  cin >> n >> k;
  vector<int> a(n);
  vector<ll> sum(n + 1, 0);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    sum[i + 1] = sum[i] + a[i];
  }
  /*
  for(int i = 0; i <= n; i++){
    cout << sum[i] << " ";
  }
  */
  ll ans = 0;
  int l = 0, r = 1;
  while(l <= n) {
    if(sum[r] - sum[l] >= k){
      ans += n - r + 1;
      l++;
      if(l >= r){
        r = l + 1;
      }
    } else {
      //cout << sum[r] << " ";
      r++;
      if(r >= n + 1){
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
