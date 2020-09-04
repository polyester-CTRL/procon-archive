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
  double ans = 1;
  while(ans < 100000){
    if((int)(ans * 0.08) == a && (int)(ans * 0.1) == b){
      cout << ans << "\n";
      return 0;
    }
    ans++;
  }
  cout << -1 << "\n";

  return 0;
}