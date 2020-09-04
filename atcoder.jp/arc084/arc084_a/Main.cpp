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
  vector<ll> a(n), b(n), c(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for(int i = 0; i < n; i++) {
    cin >> c[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());
  vector<int> sum(n + 5, 0);

  for(int i = 0; i < n; i++) {
    sum[1 + distance(b.begin(), upper_bound(b.begin(), b.end(), a[i]))]++;
  }
  for(int i = 0; i < n; i++) {
    sum[i + 1] += sum[i];
  }
  ll ans = 0;
  for(int i = 0; i < n; i++) {
    ans += (n - distance(c.begin(), upper_bound(c.begin(), c.end(), b[i]))) * sum[i + 1];
  }
  cout << ans << endl;
  return 0;
}