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
  ll sum = 0;
  for(int i = 0; i < n; i++){
    if((i+1) % 3 == 0 || (i+1)%5 == 0){
      continue;
    }else{
      sum += (i + 1);
    }
  }
  cout << sum << endl;
  return 0;
}