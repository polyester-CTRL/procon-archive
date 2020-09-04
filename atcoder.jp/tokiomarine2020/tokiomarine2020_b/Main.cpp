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
  ll a, v;
  cin >> a >> v;
  ll b, w;
  cin >> b >> w;
  ll t;
  cin >> t;
  if(b < a){
    b -= w * t;
    a -= v * t;
    if(a<= b){
      cout << "YES\n";
    }else{
      cout << "NO\n";
    }
  } else {
    b += w * t;
    a += v * t;
    if(a >= b){
      cout << "YES\n";
    }else{
      cout << "NO\n";
    }
  }
  return 0;
}