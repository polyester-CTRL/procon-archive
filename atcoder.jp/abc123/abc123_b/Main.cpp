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
  int ans = 0;
  vector<int> a(5, 0);
  int mini = 9;
  int m = 0;
  for(int i = 0; i < 5; i++) {
    cin >> a[i];
    if(a[i] % 10 != 0 && a[i] % 10 < mini){
      mini = a[i] % 10;
      m = i;
    }
  }
  for(int i = 0; i < 5; i++){
    if(i == m){
      ans += a[i];
    }else{
      if(a[i] % 10 != 0){
        ans += (a[i] + (10 - a[i] % 10));
      }else{
        ans += a[i];
      }
    }
  }
  cout << ans << endl;
  return 0;
}