#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
  ll a,b;
  cin>> a >> b;
  ll r = a % b;
  while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }
  //cout << b << endl;

  map<ll, ll> x;

  //素因数分解
  r = 2;
  while(b >= r*r){
    if(b % r == 0){
      x.insert(make_pair(r, r));
      b /= r;
    }else{
      r++;
    }
  }
  x.insert(make_pair(b, b));
  x.insert(make_pair(1, 1));

  cout << x.size() << "\n";
  return 0;
}
