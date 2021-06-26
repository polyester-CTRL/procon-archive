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
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  ll sum = c * d;
  if(b >= sum) {
    cout << -1 << endl;
  } else {
    int cnt = 1;
    a += b;
    while(a > sum) {
      a += b;
      sum += c * d;
      cnt++;
    }
    cout << cnt << endl;
  }
  return 0;
}