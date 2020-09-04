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
  string a, b, c;
  cin >> a >> b >> c;
  char start = a[0];
  a.erase(a.begin());
  while(true) {
    if(start == 'a'){
      if(a.empty()){
        cout << "A\n";
        return 0;
      }
      start = a[0];
      a.erase(a.begin());
    }else if(start == 'b'){
      if(b.empty()){
        cout << "B\n";
        return 0;
      }
      start = b[0];
      b.erase(b.begin());
    }else{
      if(c.empty()){
        cout << "C\n";
        return 0;
      }
      start = c[0];
      c.erase(c.begin());
    }
  }
  return 0;
}