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
  ll n, m, t;
  cin >> n >> m >> t;
  ll maxi = n;
  vector<ll> a(m), b(m);
  for(int i = 0; i < m; i++) {
    cin >> a[i] >> b[i];
  }
  n -= a[0];
  a.push_back(t);
  for(int i = 0; i < m; i++) {
    if(n <= 0) {
      cout << "No\n";
      return 0;
    }
    n += (b[i] - a[i]);
    if(n > maxi) {
      n = maxi;
    }
    n -= (a[i + 1] - b[i]);
  }
  if(n <= 0) {
    cout << "No\n";
  } else {
    cout << "Yes\n";
  }
  return 0;
}