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
  ll n, t;
  cin >> n >> t;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll sum = n * t;
  for(int i = 1; i < n; i++) {
    if(a[i] - a[i - 1] < t) {
      sum -= t;
      sum += a[i] - a[i - 1];
    }
  }
  cout << sum << endl;

  return 0;
}