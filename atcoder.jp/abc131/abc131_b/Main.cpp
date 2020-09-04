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
  int n, l;
  cin >> n >> l;
  int sum = 0;
  int mini = 1001001001;
  for(int i = 0; i < n; i++) {
    mini = min(mini, abs(l + (i + 1) - 1));
  }
  bool flag = true;
  for(int i = 0; i < n; i++) {
    if(flag == true && abs(l+(i+1)-1) == mini){
      flag = false;
      continue;
    }
    sum += l + (i + 1) - 1;
  }
  cout << sum << endl;
  return 0;
}