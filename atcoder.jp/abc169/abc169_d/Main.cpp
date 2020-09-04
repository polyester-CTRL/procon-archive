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
  if(n == 1){
    cout << 0 << endl;
    return 0;
  }
  ll a = 2, cnt = 0;
  bool ok = true;
  ll st = n;
  map<ll,ll> mp;
  //vector<ll> e = Eratosthenes(n);

  while(n >= a * a) {
    if(n % a == 0){
      mp[a]++;
      n /= a;
    }else{
      a++;
    }
  }
  mp[n]++;
  for(auto p : mp){
    ll tmp = 1;
    while(p.second > 0) {
      if(p.second >= tmp){
        p.second -= tmp;
        cnt++;
        tmp++;
      } else {
        p.second = 0;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}