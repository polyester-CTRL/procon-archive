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
constexpr int M = 10000;
int main() {
  int n, x, y;
  cin >> n >> x >> y;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> b, c;
  for(int i = 1; i < n; i++) {
    if(i % 2 == 0) {
      b.push_back(a[i]);
    } else {
      c.push_back(a[i]);
    }
  }
  vector<int> dpx(20020, 0), nextdpx(20020, 0);
  vector<int> dpy(20020, 0), nextdpy(20020, 0);
  dpx[0 + M + a[0]] = 1;
  dpy[0 + M] = 1;
  for(int i = 1; i < n; i++) {
    if(i % 2 == 0) {
      for(int j = 0; j < 20020; j++) {
        nextdpx[j] = 0;
      }
      for(int j = 0; j < 20020; j++) {
        if(j - a[i] >= 0) {
          nextdpx[j - a[i]] |= dpx[j];
        }
        if(j + a[i] < 20020) {
          nextdpx[j + a[i]] |= dpx[j];
        }
      }
      swap(dpx, nextdpx);
    } else {
      for(int j = 0; j < 20020; j++) {
        nextdpy[j] = 0;
      }
      for(int j = 0; j < 20020; j++) {
        if(j - a[i] >= 0) {
          nextdpy[j - a[i]] |= dpy[j];
        }
        if(j + a[i] < 20020) {
          nextdpy[j + a[i]] |= dpy[j];
        }
      }
      swap(dpy, nextdpy);
    }
  }
  if(dpx[x + M] && dpy[y + M]) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}