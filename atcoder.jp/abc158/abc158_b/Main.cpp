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
  ll n, a, b;
  cin >> n >> a >> b;
  ll ans = 0;
  ans += a * (n / (a + b));
  ans += min(n % (a + b), a);
  cout << ans << "\n";
  return 0;
}