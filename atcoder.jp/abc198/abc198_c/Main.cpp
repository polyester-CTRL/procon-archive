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
  ll r, x, y;
  cin >> r >> x >> y;
  ll ans = x * x + y * y;
  ll cnt = 0;
  ans = (ans + r * r - 1) / (r * r);
  for(ll i = 1; i <= ans; i++) {
    if(i * i >= ans) {
      if(i == 1) {
        if(r * r == x * x + y * y) {
          cout << 1 << endl;
        } else {
          cout << 2 << endl;
        }
      } else {
        cout << i << endl;
      }
      return 0;
    }
  }
}