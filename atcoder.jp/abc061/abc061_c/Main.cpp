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
  vector<vector<ll>> a(n, vector<ll>(2));
  for(int i = 0; i < n; i++) {
    cin >> a[i][0] >> a[i][1];
  }
  sort(a.begin(), a.end());
  ll cnt = 0;
  for(ll i = 0; i < n; i++){
    cnt += a[i][1];
    if(cnt >= k){
      cout << a[i][0] << endl;
      break;
    }
  }
  return 0;
}