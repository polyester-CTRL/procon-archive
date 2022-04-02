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
  int n;
  ll k, x;
  cin >> n >> k >> x;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n; i++) {
    if(a[i] < k * x) {
      k -= a[i] / x;
      a[i] %= x;
    } else {
      a[i] -= k * x;
      k = 0;
    }
  }
  sort(a.rbegin(), a.rend());
  ll sum = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] > 0 && k > 0) {
      a[i] = 0;
      k--;
    }
    sum += a[i];
  }
  cout << sum << endl;
  return 0;
}