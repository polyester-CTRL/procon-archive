#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iomanip>
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
  int n;
  cin >> n;
  vector<ll> a(n), mul(200010, 0);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    mul[a[i]]++;
  }
  ll ans = 0;
  for(ll i = 2; i <= 200000; i++) {
    for(ll j = i; j <= 200000; j++) {
      if(i * j > 200000) {
        break;
      }
      if(mul[i] > 0 && mul[j] > 0) {
        if(i != j) {
          ans += mul[i * j] * (mul[i] * mul[j] * (ll)2);
        } else {
          ans += mul[i * j] * (mul[i]) * (mul[i]);
        }
      }
    }
  }
  if(mul[1] > 0) {
    ans += mul[1] * mul[1] * mul[1];
    for(int i = 2; i <= 200000; i++) {
      ans += mul[i] * mul[i] * (ll)2 * mul[1];
    }
  }
  // int cnt = 0;
  // for(int i = 0; i < n; i++) {
  //   for(int j = 0; j < n; j++) {
  //     for(int k = 0; k < n; k++) {
  //       if(a[i] == a[j] * a[k]) {
  //         cout << cnt++ << ":";
  //         cout << a[i] << " " << a[j] << " " << a[k] << endl;
  //       }
  //     }
  //   }
  // }
  cout << ans << endl;
  return 0;
}