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
  ll t;
  cin >> n >> t;
  vector<ll> a(n);
  ll sum = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  t %= sum;
  for(int i = 0; i < n; i++) {
    t -= a[i];
    if(t <= 0) {
      cout << i + 1 << " " << t + a[i] << endl;
      return 0;
    }
  }

  return 0;
}