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
  ll ans = -1;
  for(int bit = 0; bit < (1 << (n - 1)); bit++) {
    vector<ll> num, tmp;
    for(int i = 0; i < n; i++) {
      tmp.push_back(a[i]);
      if(bit & (1 << i)) {
        ll tmp1 = 0;
        for(int j = 0; j < tmp.size(); j++) {
          tmp1 |= tmp[j];
        }
        num.push_back(tmp1);
        tmp.clear();
      }
    }
    ll tmp1 = 0;
    for(int j = 0; j < tmp.size(); j++) {
      tmp1 |= tmp[j];
    }
    num.push_back(tmp1);
    ll tmp2 = 0;
    for(int i = 0; i < num.size(); i++) {
      tmp2 ^= num[i];
    }
    num.clear();
    if(ans == -1) {
      ans = tmp2;
    } else {
      ans = min(ans, tmp2);
    }
  }
  cout << ans << endl;
  return 0;
}