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
  if(n % 2 == 0 || n % 5 == 0) {
    cout << -1 << endl;
  } else {
    ll m = 7 % n;
    ll ten = 10;
    ll cnt = 1;
    while(m != 0) {
      cnt++;
      m += ten * 7 % n;
      m %= n;
      ten *= 10;
      ten %= n;
    }
    cout << cnt << endl;
  }
  return 0;
}