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
  int a[3][3];
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      cin >> a[i][j];
    }
  }
  int n;
  cin>>n;
  vector<int> b(n);
  for(int i = 0; i < n; i++){
    cin >> b[i];
  }
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      for(int k = 0; k < n; k++){
        if(a[i][j] == b[k]){
          a[i][j] = -1;
        }
      }
    }
  }
  for(int i = 0; i < 3; i++){
    if((a[i][0] + a[i][1] +a[i][2])  == -3){
      cout << "Yes\n";
      return 0;
    }else if((a[0][i] + a[1][i] +a[2][i])  == -3){
      cout << "Yes\n";
      return 0;
    }
  }
  if((a[0][0] + a[1][1] + a[2][2]) == -3){
     cout << "Yes\n";
      return 0;
  }
  if((a[0][2] + a[1][1] + a[2][0]) == -3){
    cout << "Yes\n";
    return 0;
  }
  
  cout << "No\n";
  return 0;
}