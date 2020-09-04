#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ll a, b, k;
  cin >> a >> b >> k;
  ll t = a - k;
  if(t>=0){
    cout << t << " " << b << "\n";
  }else{
    k -= a;
    if(b>k){
      cout << 0 << " " << b - k << "\n";
    }else{
      cout << 0 << " " << 0 << "\n";
    }
  }

  return 0;
}