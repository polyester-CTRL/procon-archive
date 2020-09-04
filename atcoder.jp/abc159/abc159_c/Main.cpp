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
  int L;
  cin >> L;
  double ans;
  ans = (double)L / 3.0 * L / 3.0 * L / 3.0;
  printf("%.8f\n", ans);
  return 0;
}