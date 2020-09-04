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
  int n;
  cin >> n;
  int color[8] = {};
  int a = 0;
  for(int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    if(tmp <= 399){
      color[0] = 1;
    }else if(tmp <= 799){
      color[1] = 1;
    }else if(tmp <= 1199){
      color[2] = 1;
    }else if(tmp <= 1599){
      color[3] = 1;
    }else if(tmp <= 1999){
      color[4] = 1;
    }else if(tmp <= 2399){
      color[5] = 1;
    }else if(tmp <= 2799){
      color[6] = 1;
    }else if(tmp <= 3199){
      color[7] = 1;
    }else {
      a++;
    }
  }
  int cnt = 0;
  for(int i = 0; i < 8; i++){
    cnt += color[i];
  }
  cout << max(cnt, 1) << " " << cnt + a << endl;
  return 0;
}