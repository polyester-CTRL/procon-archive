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
  ll a, k;
  cin >> a >> k;
  if(k == 0) {
    cout << 2000000000000 - a << endl;
  } else {
    ll cnt = 0;
    while(a < 2000000000000) {
      a += 1 + a * k;
      cnt++;
    }
    cout << cnt << endl;
  }
  return 0;
}