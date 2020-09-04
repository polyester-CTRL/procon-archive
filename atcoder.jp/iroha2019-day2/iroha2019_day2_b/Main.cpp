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
using namespace std;
using ll = long long;
int main(){
  int x, y, a, b;
  cin >> x >> y >> a >> b;
  // Y = (b-a)/x * X + a
  int sx, sy, tx, ty;
  cin >> sx >> sy >> tx >> ty;
  int start;
  if((double)sx * (b - a) / x + a < sy) {
    start = 1;
  }else{
    start = 0;
  }
  int goal;
  if((double)tx * (b - a) / x + a < ty) {
    goal = 1;
  }else{
    goal = 0;
  }
  if(start + goal == 1){
    cout << "Yes\n";
  }else{
    cout << "No\n";
  }
  return 0;
}