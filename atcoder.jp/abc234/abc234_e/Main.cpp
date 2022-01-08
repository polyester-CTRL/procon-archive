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
  ll x;
  cin >> x;
  if(x < 100) {
    cout << x << endl;
  } else {
    ll ans = -1;
    for(int i = -9; i < 9; i++) {
      for(int j = 1; j < 10; j++) {
        ll now = j;
        ll sum = 0;
        while(sum < x) {
          sum *= 10;
          sum += now;
          now += i;
          if(now < 0 || now > 9) {
            break;
          }
        }
        if(sum >= x) {
          if(ans == -1) {
            ans = sum;
          } else {
            ans = min(ans, sum);
          }
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}