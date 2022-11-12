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
  int n, m;
  cin >> n >> m;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  ll ans = 0, sum = 0, tmp = 0;
  for(int i = 0; i < n; i++) {
    sum += a[i];
  }
  if(a[n - 1] - a[0] <= 1) {
    cout << 0 << endl;
    return 0;
  }
  for(int i = 0; i < n; i++) {
    a.push_back(a[i]);
  }
  // for(int i = 0; i < n * 2; i++) {
  //   cout << a[i] << " ";
  // }
  // cout << endl;
  ans = *max_element(a.begin(), a.end());
  tmp = a[0];
  for(int i = 1; i < n * 2; i++) {
    if((a[i - 1] + 1) % m == a[i] || a[i - 1] == a[i]) {
      tmp += a[i];
      if(i < 2 * n - 1 && (a[i - 1] + 1) % m != a[i] && a[i - 1] != a[i]) {
        // tmp += a[i];
      } else if(i == 2 * n - 1) {
        // tmp += a[i];
      }
    } else {
      ans = max(ans, tmp);
      // cout << ans << endl;
      tmp = a[i];
    }
  }
  ans = max(ans, tmp);
  cout << max((ll)0, sum - ans) << endl;

  return 0;
}