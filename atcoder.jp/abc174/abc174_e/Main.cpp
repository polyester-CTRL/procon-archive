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
  int n, k;
  cin >> n >> k;
  vector<ll> a(n);
  ll maxi = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    maxi = max(maxi, a[i]);
  }
  ll l = 0, r = (ll)1e9 + 10;
  ll mid = (l + r) / 2;
  ll cnt = 0;
  while(r - l > 1) {
    mid = l + (r - l) / 2;
    cnt = 0;
    for(int i = 0; i < n; i++) {
      cnt += (a[i] + mid - 1) / mid - 1;
    }
    if(cnt <= k) {
      r = mid;
    } else {
      l = mid;
    }
  }
  cout << r << endl;
  return 0;
}