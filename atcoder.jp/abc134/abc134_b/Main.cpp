#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n,d;
  cin >> n >> d;
  int ans = 0;
  while(n>0){
    n -= 2 * d + 1;
    ans++;
  }
  cout << ans << "\n";
  return 0;
}