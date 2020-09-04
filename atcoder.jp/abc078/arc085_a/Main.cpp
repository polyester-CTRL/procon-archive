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
  int n, m;
  cin >> n >> m;
  ll ans = (n - m) * 100 + m * 1900;
  ans *= pow(2, m);
  cout << ans << '\n';
  return 0;
}