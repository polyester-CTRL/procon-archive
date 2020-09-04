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
  int a, b, k;
  cin >> k >> a >> b;
  for(int i = a; i <= b; i++){
    if(i % k== 0){
      cout << "OK\n";
      return 0;
    }
  }
  cout << "NG\n";
  return 0;
}