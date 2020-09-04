#include<iostream>
#define int long long
using namespace std;
signed main(){
  int h;
  cin>>h;
  int ans = 0, mo = 1;
  while (h > 0)
  {
    ans += mo;
    mo *= 2;
    h /= 2;
  }
  cout << ans << "\n";
  return 0;
}