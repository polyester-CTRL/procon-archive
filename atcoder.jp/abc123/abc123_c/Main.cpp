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
  ll n, a, b, c, d, e;
  cin >> n >> a >> b >> c >> d >> e;
  ll f = min({a, b, c, d, e});
  //cout << n / f << " ";
  cout << (n + f - 1) / f + 4 << endl;
  return 0;
}