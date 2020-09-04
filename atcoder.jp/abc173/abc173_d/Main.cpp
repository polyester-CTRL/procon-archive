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
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.rbegin(), a.rend());
  vector<ll> b;
  ll ans = a[0];
  for(int i = 1; i < ((n + 1) / 2); i++) {
    ans += a[i];
  }
  for(int i = 1; i < (n / 2); i++) {
    ans += a[i];
  }
  cout << ans << endl;
  return 0;
}