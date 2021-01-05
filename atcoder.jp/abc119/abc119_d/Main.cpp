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
  int a, b, q;
  cin >> a >> b >> q;
  vector<ll> s(a), t(b);
  for(int i = 0; i < a; i++) {
    cin >> s[i];
  }
  for(int i = 0; i < b; i++) {
    cin >> t[i];
  }
  for(int i = 0; i < q; i++) {
    ll x;
    cin >> x;
    ll ans = 1001001001001;
    auto itr1 = lower_bound(s.begin(), s.end(), x);
    auto itr2 = lower_bound(t.begin(), t.end(), *itr1);
    if(itr2 != t.end()) {
      if(itr1 != s.end()) {
        ans = abs(*itr2 - x);
      } else {
        ans = min({ans, abs(x - *(itr1 - 1)) * 2 + abs(*itr2 - x),
                   abs(x - *(itr1 - 1)) + abs(*itr2 - x) * 2});
      }
    }
    if(itr1 != s.begin()) {
      itr1--;
      itr2 = lower_bound(t.begin(), t.end(), *itr1);
      if(itr2 != t.end()) {
        if(*itr2 < x) {
          ans = min(ans, abs(x - *itr1));
        } else {
          ans = min({ans, abs(x - *itr1) * 2 + abs(*itr2 - x),
                     abs(x - *itr1) + abs(*itr2 - x) * 2});
        }
      }
    }
    itr1 = lower_bound(t.begin(), t.end(), x);
    itr2 = lower_bound(s.begin(), s.end(), *itr1);
    if(itr2 != s.end()) {
      if(itr1 != t.end()) {
        ans = min(ans, abs(*itr2 - x));
      } else {
        ans = min({ans, abs(x - *(itr1 - 1)) * 2 + abs(*itr2 - x),
                   abs(x - *(itr1 - 1)) + abs(*itr2 - x) * 2});
      }
    }
    if(itr1 != t.begin()) {
      itr1--;
      itr2 = lower_bound(s.begin(), s.end(), *itr1);
      if(itr2 != s.end()) {
        if(*itr2 < x) {
          ans = min(ans, abs(x - *itr1));
        } else {
          ans = min({ans, abs(x - *itr1) * 2 + abs(*itr2 - x),
                     abs(x - *itr1) + abs(*itr2 - x) * 2});
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}