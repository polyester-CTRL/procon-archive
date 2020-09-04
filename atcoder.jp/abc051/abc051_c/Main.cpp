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
  int sx, sy, tx, ty;
  cin >> sx >> sy >> tx >> ty;
  for(int i = sx; i < tx; i++){
    cout << 'R';
  }
  for(int i = sy; i < ty; i++){
    cout << 'U';
  }
  for(int i = tx; i > sx; i--){
    cout << 'L';
  }
  for(int i = ty; i > sy; i--){
    cout << 'D';
  }
  cout << 'D';
  for(int i = sx; i < tx + 1; i++){
    cout << 'R';
  }
  for(int i = sy; i < ty + 1; i++){
    cout << 'U';
  }
  cout << 'L';
  cout << 'U';
  for(int i = tx; i > sx - 1; i--){
    cout << 'L';
  }
  for(int i = ty; i > sy - 1; i--){
    cout << 'D';
  }
  cout << 'R';
  cout << '\n';
  return 0;
}