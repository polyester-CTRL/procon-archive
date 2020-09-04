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
  ll n;
  cin >> n;
  ll ans = 1;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.rbegin(), a.rend());
  ans = a[n - 1];
  if(ans == 0) {
    cout << 0 << endl;
    return 0;
  }
  for(int i = 0; i < n - 1; i++) {
    if(a[i] > (double)1e18 / ans) {
      cout << -1 << endl;
      return 0;
    }
    ans *= a[i];
    if(ans > (ll)1e18){
      cout << -1 << endl;
      return 0;
    }
  }
  cout << ans << endl;
  return 0;
}