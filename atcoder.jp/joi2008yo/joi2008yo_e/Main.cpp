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
  int r, c;
  cin >> r >> c;
  vector<vector<int>> a(r, vector<int>(c));
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      cin >> a[i][j];
    }
  }
  int ans = 0;
  for(int bit = 0; bit < (1 << r); bit++) {
    for(int i = 0; i < r; i++) {
      if(bit >> i & 1){
        for(int j = 0; j < c; j++){
          a[i][j] ^= 1;
        }
      }
    }
    int num = 0;
    for(int j = 0; j < c; j++) {
      int count = 0;
      int count1 = 0;
      for(int i = 0; i < r; i++) {
        if(a[i][j] == 1){
          count++;
        }else{
          count1++;
        }
      }
      
        num += max(count, count1);
    }
    ans = max(ans, num);
    for(int i = 0; i < r; i++) {
      if(bit >> i & 1){
        for(int j = 0; j < c; j++){
          a[i][j] ^= 1;
        }
      }
    }
  }
  cout << ans << '\n';
  return 0;
}