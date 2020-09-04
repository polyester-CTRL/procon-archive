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
  ll mini = 1001001001001;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    mini = min(mini, a[i]);
  }
  while(mini > 1){
    ll tmp = mini;
    //cout << tmp << " ";
    int flag = 0;
    for(int i = 0; i < n; i++) {
      if(flag == 0 && a[i] == mini){
        flag = 1;
        continue;
      }
      if(a[i] >= mini){
        a[i] %= mini;
        if(a[i] != 0){
          tmp = min(tmp, a[i]);
        }
      }
    }
    flag = 0;
    for(int i = 0; i < n; i++) {
      if(a[i] > 0){
        flag++;
      }
    }
    if(flag > 1){
      mini = min(mini, tmp);
      //cout << mini << endl;
      continue;
    }else{
      break;
    }
  }
  cout << mini << endl;
  return 0;
}