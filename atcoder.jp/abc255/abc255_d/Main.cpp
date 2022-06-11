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
  int n, q;
  cin >> n >> q;
  vector<ll> a(n), x(q), sum1(n + 1, 0), sum2(n + 1, 0);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  for(int i = 0; i < n; i++) {
    sum1[i + 1] += sum1[i] + a[i];
  }
  for(int i = n - 1; i >= 0; i--) {
    sum2[i] += sum2[i + 1] + a[i];
  }
  for(int i = 0; i < q; i++) {
    cin >> x[i];
  }
  for(int i = 0; i < q; i++) {
    ll dist = distance(a.begin(), lower_bound(a.begin(), a.end(), x[i]));
    // cout << dist << " ";
    ll sum = 0;
    sum += x[i] * dist - sum1[dist];
    sum += sum2[dist] - x[i] * (n - dist);
    cout << sum << endl;
  }

  return 0;
}