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
  ll mini = *min_element(a.begin(), a.end());
  ll ans = mini;
  for(int i = 0; i < n; i++) {
    ans = gcd(ans, a[i]);
  }
  cout << ans << endl;
  return 0;
}