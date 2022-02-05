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
  int t;
  cin >> t;
  while(t--) {
    ll a, s;
    cin >> a >> s;
    if(a * 2 > s) {
      cout << "No\n";
      continue;
    } else {
      s -= a * 2;
      vector<ll> b(61, 0);
      for(ll i = 0; i < 61; i++) {
        if(!(a & ((ll)1 << i))) {
          b[i] = ((ll)1 << i);
        }
      }
      for(ll i = 60; i >= 0; i--) {
        if(s >= b[i] && b[i] != 0) {
          s -= b[i];
        }
      }
      if(s == 0) {
        cout << "Yes\n";
      } else {
        cout << "No\n";
      }
    }
  }
  return 0;
}