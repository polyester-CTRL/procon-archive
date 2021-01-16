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
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n; i++) {
    cin >> b[i];
  }
  vector<ll> maxA(n + 10, 0), maxB(n + 10, 0);
  for(int i = 0; i < n; i++) {
    maxA[i + 1] = max(maxA[i], a[i]);
    maxB[i + 1] = max(maxB[i], b[i]);
  }
  ll ans = 0;
  for(int i = 1; i <= n; i++) {
    ans = max(ans, maxA[i] * b[i - 1]);
    cout << ans << '\n';
  }
  return 0;
}