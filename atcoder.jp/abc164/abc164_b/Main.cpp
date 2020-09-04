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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  while(a > 0 && c > 0){
    c -= b;
    if(c <= 0){
      cout << "Yes\n";
      return 0;
    }
    a -= d;
    if(a <= 0){
      cout << "No\n";
      return 0;
    }
  }
  if(a <= 0){
    cout << "No\n";
  }else{
    cout << "Yes\n";
  }
  return 0;
}