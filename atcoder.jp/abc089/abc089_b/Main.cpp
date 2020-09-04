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
  int a[4] = {};
  for(int i = 0; i < n; i++){
    char c;
    cin >> c;
    if(c == 'P'){
      a[0] = 1;
    }else if(c == 'W'){
      a[1] = 1;
    }else if(c == 'G'){
      a[2] = 1;
    }else if(c == 'Y'){
      a[3] = 1;
    }
  }
  int cnt = 0;
  for(int i = 0; i < 4; i++){
    if(a[i] == 1){
      cnt++;
    }
  }
  if(cnt == 3){
    cout << "Three\n";
  }else{
    cout << "Four\n";
  }
  return 0;
}