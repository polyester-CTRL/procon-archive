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
  ll n;
  cin >> n;
  ll ans = 0;
  for(ll i = 0; i < n; i++){
    ans += i;
  }
  cout << ans << endl;
  return 0;
}