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
  if(n <= 599){
    cout << 8 << endl;
  }else if(n <= 799){
    cout << 7 << endl;
  }else if(n <= 999){
    cout << 6 << endl;
  }else if(n <= 1199){
    cout << 5 << endl;
  }else if(n <= 1399){
    cout << 4 << endl;
  }else if(n <= 1599){
    cout << 3 << endl;
  }else if(n <= 1799){
    cout << 2 << endl;
  }else {
    cout << 1 << endl;
  }
  return 0;
}