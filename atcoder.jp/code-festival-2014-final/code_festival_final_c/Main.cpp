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
  ll n;
  cin >> n;
  if(n < 10) {
    cout << -1 << endl;
    return 0;
  }
  for(ll i = 1; i <= 10000; i++) {
    ll tmp = i;
    ll f = 1;
    ll sum = 0;
    while(tmp > 0) {
      sum += f * (tmp % 10);
      tmp /= 10;
      f *= i;
    }
    if(sum == n) {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}