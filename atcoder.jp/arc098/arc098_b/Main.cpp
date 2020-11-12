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
  vector<ll> a(n), x(n + 1, 0), sum(n + 1, 0);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    sum[i + 1] = a[i] + sum[i];
    x[i + 1] = a[i] ^ x[i];
  }
  ll ans = 0;
  for(int i = 1; i <= n; i++) {
    ll r = i, l = i - 1;
    ll now = a[l];
    int state = 0;
    while(l < r) {
      if((now & a[r]) == 0) {
        state = 1;
        now |= a[r];
        r++;
        if(r == n + 1) {
          ans += (r - l) * (r - l - 1) / 2;
          break;
        }
      } else {
        if(state == 1) {
          state = 0;
        }
        ans += r - l;
        now ^= a[l];
        l++;
      }
    }
    i = r;
    if(i == n && state == 0) {
      ans += r - l;
    }
  }

  cout << ans << endl;
  return 0;
}