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
  int x, y;
  cin >> x >> y;
  if(x * 2 <= y && x * 4 >= y && y % 2 == 0){
    cout << "Yes\n";
  }else{
    cout << "No\n";
  }
  return 0;
}