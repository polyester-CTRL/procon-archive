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
  map<ll, ll> m;
  for(int i = 0; i < n; i++){
    ll tmp;
    cin >> tmp;
    m[tmp]++;
  }
  ll ans = 0;
  for(auto a : m) {
    if(a.second % 2 != 0){
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}