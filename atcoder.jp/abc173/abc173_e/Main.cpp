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
const ll MOD = 1000000007;
int main() {
  int n, k;
  cin >> n >> k;
  vector<ll> a, b;
  for(int i = 0; i < n; i++) {
    ll tmp;
    cin >> tmp;
    if(tmp < 0) {
      b.push_back(tmp);
    } else {
      a.push_back(tmp);
    }
  }
  sort(a.rbegin(), a.rend());
  sort(b.begin(), b.end());
  if(b.size() == n) {
    if(k % 2 != 0) {
      reverse(b.begin(), b.end());
    }
    ll ans = 1;
    for(int i = 0; i < k; i++) {
      ans *= b[i];
      ans %= MOD;
    }
    if(ans < 0) {
      ans += MOD;
    }
    cout << ans << endl;
  } else if(a.size() >= n - 1 && k <= a.size()) {
    ll ans = 1;
    for(int i = 0; i < k; i++) {
      ans *= a[i];
      ans %= MOD;
    }
    if(ans < 0) {
      ans += MOD;
    }
    cout << ans << endl;
  } else {
    ll ans = 1;
    vector<ll> c;
    if(b.size() > 1) {
      for(int i = 0; i < b.size() - 1; i += 2) {
        c.push_back(b[i] * b[i + 1]);
      }
    }
    if(b.size() % 2 != 0) {
      c.push_back(*(b.end() - 1));
    }
    int ac = 0, cc = 0;
    for(int i = 0; i < k; i++) {
      if((a[ac] * a[ac + 1] < c[cc] && i < k - 1) || ac >= a.size()) {
        c[cc] %= MOD;
        ans *= c[cc];
        ans %= MOD;
        i++;
        cc++;
      } else {
        ans *= a[ac];
        ans %= MOD;
        ac++;
      }
    }
    if(ans < 0) {
      ans += MOD;
    }
    cout << ans << endl;
  }
  return 0;
}
