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
  ll a,b,c, k;
  cin>>a>>b>>c >> k;
  while(k--){
    if(a < b && b < c){
      break;
    }
    if(a >= b){
      b *= 2;
    }else if(b >= c){
      c *= 2;
    }
  }
  if(a < b && b < c){
    cout << "Yes\n";
  }else{
    cout << "No\n";
  }
  return 0;
}