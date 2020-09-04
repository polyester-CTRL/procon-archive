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
  ll x, y;
  cin >> x >> y;
  int cnt = 0;
  while(x <= y){
    x *= 2;
    cnt++;
  }
  cout << cnt << endl;
  return 0;
}