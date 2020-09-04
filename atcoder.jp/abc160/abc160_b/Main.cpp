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
  ll x;
  cin >> x;
  ll ans = 0;
  ans += 1000 * (int) (x / 500);
  ll tmp = x % 500;
  x /= 500;
  ans += 5 * (int)(tmp / 5);
  cout << ans << endl;
  return 0;
}