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
  sort(a.begin(), a.end());
  vector<ll> sum(n + 1, 0);
  for(int i = n; i > 0; i--) {
    sum[i - 1] += sum[i] + a[i - 1];
  }
  ll ans = 0;
  for(int i = 0; i < n - 1; i++) {
    ans += abs(sum[i + 1] - a[i] * (n - i - 1));
  }
  cout << ans << endl;
  return 0;
}