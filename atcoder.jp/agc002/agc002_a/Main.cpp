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
  int a, b;
  cin >> a >> b;
  
  if(a < 0 && b < 0){
    if(abs(b - a) % 2 == 0){
      cout << "Negative\n";
    }else{
      cout << "Positive\n";
    }
  }else if(a <= 0 && b >= 0){
    cout << "Zero\n";
  }else{
    cout << "Positive\n";
  }
  return 0;
}