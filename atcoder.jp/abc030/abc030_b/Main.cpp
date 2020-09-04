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
  int n, m;
  cin >> n >> m;
  n %= 12;
  double a, b;
  a = m * 6.0;
  b = n * 30.0 + a / 12.0;
  //printf("%.5f %.5f\n", a, b);
  printf("%.5f\n", min(max(a, b) - min(a, b), min(a, b) + 360 - max(a, b)));
  return 0;
}