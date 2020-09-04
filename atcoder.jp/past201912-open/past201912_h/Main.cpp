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
  vector<ll> c(n);
  ll mini = 1001001001;
  ll om = 1001001001;
  for(int i = 0; i < n; i++) {
    cin >> c[i];
    mini = min(mini, c[i]);
    if(i % 2 == 0) {
      om = min(om, c[i]);
    }
  }
  int minidx = 0;
  int omidx = 0;
  for(int i = 0; i < n; i++) {
    if(c[i] == mini) {
      minidx = i;
    }
    if(i % 2 == 0 && c[i] == om) {
      omidx = i;
    }
  }
  int q;
  cin >> q;
  ll sum = 0;
  ll mns = 0;
  ll omns = 0;
  for(int i = 0; i < q; i++) {
    ll tmp;
    cin >> tmp;
    if(tmp == 1) {
      ll a, x;
      cin >> x >> a;
      x--;
      if(c[x] >= a + omns && x % 2 == 0) {
        c[x] -= a;
        sum += a;
        if(mini >= c[x]) {
          minidx = x;
          mini = c[x];
        }
        if(x % 2 == 0 && om >= c[x]) {
          omidx = x;
          om = c[x];
        }
      } else if(c[x] >= a + mns && x % 2 != 0) {
        c[x] -= a;
        sum += a;
        if(mini >= c[x]) {
          minidx = x;
          mini = c[x];
        }
        if(x % 2 == 0 && om >= c[x]) {
          omidx = x;
          om = c[x];
        }
      }

    } else if(tmp == 2) {
      ll a;
      cin >> a;
      if(a <= om) {
        om -= a;
        if(minidx % 2 == 0) {
          //c[minidx] -= a;
          mini -= a;
        } else {
          //c[omidx] -= a;
        }
        if(om < mini) {
          minidx = omidx;
          mini = om;
        }
        sum += a * ((n + 1) / 2);
        omns += a;
      }
    } else {
      ll a;
      cin >> a;
      if(a <= om && a <= mini) {
        //c[omidx] -= a;
        om -= a;
        //c[minidx] -= a;
        mini -= a;
        sum += a * n;
        omns += a;
        mns += a;
      }
    }
  }
  cout << sum << endl;
  return 0;
}