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
  ll tmp = 0;
  int cnt = 0;
  for(int i = 1; tmp < n; i++) {
    tmp += i;
    cnt = i;
  }
  //cout << cnt << endl;
  ll sum = cnt;
  vector<ll> ans;
  ans.push_back(cnt);
  for(int i = cnt - 1; i >= 0; i--) {
    if(sum + i == n){
      if(i != 0){
        ans.push_back(i);
      }
      break;
    }
    if(sum + i > n){
      continue;
    }else{
      sum += i;
      ans.push_back(i);
    }
  }
  for(auto p : ans){
    cout << p << endl;
  }
  return 0;
}