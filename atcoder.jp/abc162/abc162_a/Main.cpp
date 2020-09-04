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
  while(n > 0){
    if(n % 10 == 7){
      cout << "Yes\n";
      return 0;
    }
    n /= 10;
  }
  cout << "No\n";
  return 0;
}