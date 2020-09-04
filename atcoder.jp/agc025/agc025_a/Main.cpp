#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  int ans = 0;
  while(n>0){
    ans += n % 10;
    n /= 10;
  }
  if(ans == 1){
    ans = 10;
  }
  cout << ans << "\n";
  return 0;
}