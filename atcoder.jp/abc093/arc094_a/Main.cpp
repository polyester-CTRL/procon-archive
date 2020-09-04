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
  int a, b, c;
  cin >> a >> b >> c;
  
  int cnt = 0;
  while(!(a == b && b == c)){
    if(a == b && a < c){
      a++;
      b++;
      cnt++;
    } else if(a == c && a < b) {
      a++;
      c++;
      cnt++;
    } else if(b == c && b < a) {
      b++;
      c++;
      cnt++;
    } else {
      int mini = min({a, b, c});
      if(a == mini){
        a += 2;
        cnt++;
      }else if(b == mini){
        b += 2;
        cnt++;
      } else {
        c += 2;
        cnt++;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}