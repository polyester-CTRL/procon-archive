#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;
using ll = long long;
int main() {
  ll x, y, a, b;
  cin >> x >> y >> a >> b;
  ll cnt = 0;
  while(b / x >= a && x < y && x < y / a) {
    x *= a;
    cnt++;
  }
  if(x < y) {
    ll z = y - x - 1;
    cnt += z / b;
  }
  cout << cnt << endl;
  return 0;
}