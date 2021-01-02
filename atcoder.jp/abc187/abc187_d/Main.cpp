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
  cin >> n;
  vector<ll> a(n), b(n);
  vector<vector<ll>> d(n, vector<ll>(2, 0));
  ll sum = 0, sumA = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
    d[i][0] = a[i] + a[i] + b[i];
    d[i][1] = a[i];
    sumA += a[i];
  }
  sort(d.rbegin(), d.rend());
  for(int i = 0; i < n; i++) {
    sum += d[i][0];
    if(sum > sumA) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  return 0;
}