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
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> check(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    check[a[i]]++;
  }
  if(n % 2 == 1){
    for(int i = 1; i <= n - 1; i++){
      if(i == 0){
        if(check[i] != 0){
          cout << 0 << endl;
          return 0;
        }
      }else if(i % 2 == 0){
        if(check[i] != 2){
          cout << 0 << endl;
          return 0;
        }
      }else{
        if(check[i] != 0){
          cout << 0 << endl;
          return 0;
        }
      }
    }
  }else{
    for(int i = 1; i <= n - 1; i++){
      if(i % 2 == 1){
        if(check[i] != 2){
          cout << 0 << endl;
          return 0;
        }
      }else{
        if(check[i] != 0){
          cout << 0 << endl;
          return 0;
        }
      }
    }
  }
  int ans = 1;
  for(int i = 0; i < n / 2; i++){
    ans *= 2;
    ans %= 1000000007;
  }
  cout << ans << endl;

  return 0;
}